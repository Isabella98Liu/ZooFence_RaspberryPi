#include "userbook.h"
#include "ui_userbook.h"

userBook::userBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userBook)
{
    ui->setupUi(this);
    returnButton = ui->back;
    returnButton->setObjectName("returnButton");
}

userBook::~userBook()
{
    delete ui;
}

//--------------------------------SLOTS-------------------------------------------

void userBook::mousePressEvent(QMouseEvent *event)
{
    emit return_index_3_2();
}
