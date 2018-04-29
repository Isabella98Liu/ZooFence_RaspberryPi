#ifndef PAGE5_H
#define PAGE5_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QSlider>
#include <QString>
#include <Qt>
#include <QTimer>

#include "page7.h"
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
    QSlider *crowdSlider;
    QLabel *tmp;
    QLabel *hum;
    QLabel *crowd;
    bool Check_device_status();
    void sensorDataUpdate();

  private slots:
        void timerUpdate(void);
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
