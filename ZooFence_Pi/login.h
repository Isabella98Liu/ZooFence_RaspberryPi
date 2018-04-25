#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QRect>
#include <Qt>
#include "clickablelabel.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private:
    Ui::login *ui;
    QPushButton *loginButton;
    QPushButton *returnButton;


signals:
    void return_index_4_2();
    void switch_index_4_5();

private slots:
    void on_pushButton_clicked();
    void on_returnButton_clicked();
};

#endif // LOGIN_H
