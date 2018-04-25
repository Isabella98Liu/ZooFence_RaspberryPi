#include "page8.h"
#include "ui_page8.h"

page8::page8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page8)
{
    ui->setupUi(this);
    QIcon ico(":/icon/Recource/smaller.PNG");
    QIcon ico1(":/icon/Recource/bigger.PNG");
    smallbutton = ui->pushButton;
    bigbutton = ui->pushButton_2;
    smallbutton->setIcon(ico);
    smallbutton->setIconSize(QSize(26,26));
    bigbutton->setIcon(ico1);
    bigbutton->setIconSize(QSize(26,26));
    smallbutton->setFlat(true);
    bigbutton->setFlat(true);
}

page8::~page8()
{
    delete ui;

}
