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

  private slots:
        void timerUpdate(void);
        void on_pushButton_4_clicked();

        void on_pushButton_clicked();

signals:
        void return_index_5_4();
        void switch_index_5_6();
};



#endif // PAGE5_H
