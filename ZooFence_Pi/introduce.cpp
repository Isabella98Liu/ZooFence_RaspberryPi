#include "introduce.h"
#include "ui_introduce.h"

introduce::introduce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::introduce)
{
    ui->setupUi(this);
    button1 = ui->pushButton;
    button2 = ui->pushButton_2;
    textLabel = ui->label_2;
    loadResource();
}

introduce::~introduce()
{
    delete ui;
}

void introduce::loadResource()
{
    QImage pic1(":/.001/Resources/002/login.png");
    QImage pic2(":/.001/Resources/002/book.png");
    QIcon button1_icon(QPixmap::fromImage(pic1));
    QIcon button2_icon(QPixmap::fromImage(pic2));
    button1->setIcon(button1_icon);
    button1->setIconSize(QSize(40, 40));
    button2->setIcon(button2_icon);
    button2->setIconSize(QSize(40, 40));
}

void introduce::on_pushButton_clicked()
{
    this->setVisible(false);
    emit switch_index_2_4();
}

void introduce::on_pushButton_2_clicked()
{
    this->setVisible(false);
    emit switch_index_2_3();
}
