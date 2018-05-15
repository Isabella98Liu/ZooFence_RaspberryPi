#ifndef PAGE5_H
#define PAGE5_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QSlider>
#include <QString>
#include <Qt>
#include <QTimer>
#include <QDesktopWidget>

#include "page7.h"
#include "dataupdate.h"
#include <qdatetime.h>

namespace Ui {
class page5;
}

class page5 : public QWidget
{
    Q_OBJECT

public:
    explicit page5(QWidget *parent = 0);
    ~page5();
    void raiseLabel();

private:
    Ui::page5 *ui;
    QPushButton *returnButton;
    QPushButton *recordButton;
    QPushButton *checkButton;
    QPushButton *vedioButton;
    QLabel *showdateLabel;
    QLabel *showtimeLabel;
    QSlider *tmpSlider;
    QSlider *humSlider;
    QLabel *tmp;
    QLabel *hum;
    QLabel *red_bulb_1;
    QLabel *red_bulb_2;
    QLabel *distance;
    bool Check_device_status();

  private slots:
        void timerUpdate(void);
        void sensorDataUpdate();
        void on_pushButton_4_clicked();
        void on_pushButton_clicked();
        void on_pushButton_2_clicked();
        void on_pushButton_3_clicked();

signals:
        void return_index_5_4();
        void switch_index_5_6();
        void switch_index_5_10();
        void switch_index_5_7();
};



#endif // PAGE5_H
