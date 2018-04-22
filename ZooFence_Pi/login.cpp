#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    loginButton = ui->pushButton;
    returnButton = ui->return_2;
    loginButton->setObjectName("loginButton");
    returnButton->setObjectName("returnButton");
}

login::~login()
{
    delete ui;
}

void login::mousePressEvent(QMouseEvent *event)
{
    emit return_index_4_2();
}
