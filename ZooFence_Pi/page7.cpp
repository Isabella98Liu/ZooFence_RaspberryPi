#include "page7.h"
#include "ui_page7.h"
#include <QIcon>

page7::page7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page7)
{
    ui->setupUi(this);

}

page7::~page7()
{
    delete ui;
}
