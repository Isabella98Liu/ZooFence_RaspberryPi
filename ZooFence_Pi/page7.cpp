#include "page7.h"
#include "ui_page7.h"
#include <QIcon>

page7::page7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page7)
{
    ui->setupUi(this);
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);

}

page7::~page7()
{
    delete ui;
}
