#include "page8.h"
#include "ui_page8.h"

page8::page8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page8)
{
    ui->setupUi(this);
    smallbutton = ui->pushButton;
    bigbutton = ui->pushButton_2;
    smallbutton->setObjectName("adjustButton");
    bigbutton->setObjectName("adjustButton");
}

page8::~page8()
{
    delete ui;

}
