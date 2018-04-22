#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <Qt>

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
    QLabel *returnButton;

protected:
    void mousePressEvent(QMouseEvent *event);

signals:
    void return_index_4_2();

};

#endif // LOGIN_H
