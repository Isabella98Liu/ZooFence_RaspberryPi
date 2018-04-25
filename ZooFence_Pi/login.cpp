#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    loginButton = ui->pushButton;
    returnButton = ui->returnButton;
    loginButton->setObjectName("loginButton");
    returnButton->setObjectName("returnButton");
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    emit switch_index_4_5();
}


void login::on_returnButton_clicked()
{
    emit return_index_4_2();
}
