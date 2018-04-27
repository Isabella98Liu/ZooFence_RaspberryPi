#include "page6.h"
#include "ui_page6.h"

page6::page6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page6)
{
    ui->setupUi(this);
    dateEdit = ui->dateEdit;
    dateEdit->setCalendarPopup(true);
    QIcon ico(":/.001/Resources/006/fine.png");
    searchButton = ui->pushButton;
    returnButton = ui->pushButton_2;
    returnButton->setObjectName("returnButton");
    searchButton->setObjectName("check");
    searchButton->setIcon(ico);
    searchButton->setIconSize(QSize(45,45));
    searchButton->setFlat(true);
}

page6::~page6()
{
    delete ui;
}

void page6::on_pushButton_2_clicked()
{
    emit return_index_6_5();
}
