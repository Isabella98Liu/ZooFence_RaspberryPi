#ifndef PAGE5_H
#define PAGE5_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <Qt>

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
    QLabel *peopleLabel;
    QLabel *showpeopleLabel;
    QLabel *tempLabel;
    QLabel *showtempLabel;
    QLabel *humLabel;
    QLabel *showhumLabel;
    bool Check_device_status();

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
