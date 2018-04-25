#include "userbook.h"
#include "ui_userbook.h"

userBook::userBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userBook)
{
    ui->setupUi(this);
    returnButton = ui->pushButton;
    returnButton->setObjectName("returnButton");
}

userBook::~userBook()
{
    delete ui;
}

//--------------------------------SLOTS-------------------------------------------

void userBook::on_pushButton_clicked()
{
    emit return_index_3_2();
}
