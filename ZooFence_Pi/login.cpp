#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    loginButton = ui->pushButton;
    returnButton = ui->returnButton;
    pswd = ui->lineEdit_2;
    pswd->setEchoMode(QLineEdit::Password);
    loginButton->setObjectName("loginButton");
    returnButton->setObjectName("returnButton");
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    if(pswd->text() == QString("CCNU") && ui->lineEdit->text() == QString("admin"))
    {
        timer1 = new QTimer(this);
        connect(timer1, SIGNAL(timeout()), this, SLOT(switchPage()));
        timer1->start(1000);
        loadGif();
    }
    else
        pswd->setText("");
}


void login::on_returnButton_clicked()
{
    ui->lineEdit->setText("");
    pswd->setText("");
    emit return_index_4_2();
}

void login::loadGif()
{
    loading = new QMovie(":/.001/Resources/004/Spinner.gif");
    loading->setScaledSize(QSize(70,70));
    ui->label_6->setMovie(loading);
    loading->start();
}

//-------------------------------SLOT-------------------------------------

void login::switchPage()
{
    emit switch_index_4_5();
    ui->lineEdit->setText("");
    pswd->setText("");
    timer1->disconnect();
    delete loading;
}
