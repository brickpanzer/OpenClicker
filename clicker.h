#ifndef CLICKER_H
#define CLICKER_H

#include "upgradeclass.h"
#include <QWidget>
#include <QVector>
#include <QMainWindow>
#include <QTimer>

namespace Ui {
class Clicker;
}

class Clicker : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clicker(QWidget *parent = nullptr);
    ~Clicker();
    void gameBuilder();

private slots:

    void gameUpdater();

    void on_ClickerButton_clicked();

    void on_Clicker1_clicked();

    void on_Clicker2_clicked();

    void on_Clicker3_clicked();

    void on_Clicker4_clicked();

    void on_Clicker5_clicked();

    void on_actionReset_triggered();

    void on_c1u1_clicked();

    void on_c1u2_clicked();

    void on_c1u3_clicked();

    void on_c2u1_clicked();

    void on_c2u2_clicked();

    void on_c2u3_clicked();

    void on_c3u1_clicked();

    void on_c3u2_clicked();

    void on_c3u3_clicked();

    void on_c4u1_clicked();

    void on_c4u2_clicked();

    void on_c4u3_clicked();

    void on_c5u1_clicked();

    void on_c5u2_clicked();

    void on_c5u3_clicked();

private:
    std::vector<UpgradeClass*> upgrades;
    int cps = 0;
    int count = 0;

    int CLICKER_1_COUNT = 0;
    int CLICKER_1_COST = 10;

    int CLICKER_2_COUNT = 0;
    int CLICKER_2_COST = 100;

    int CLICKER_3_COUNT = 0;
    int CLICKER_3_COST = 300;

    int CLICKER_4_COUNT = 0;
    int CLICKER_4_COST = 1000;

    int CLICKER_5_COUNT = 0;
    int CLICKER_5_COST = 5000;

    Ui::Clicker *ui;
    QTimer *timer;
};

#endif // CLICKER_H
