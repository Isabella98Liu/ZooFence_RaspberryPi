#include "page5.h"
#include "ui_page5.h"
#include <QTimer>
#include <qdatetime.h>

page5::page5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page5)
{
    ui->setupUi(this);
    recordButton = ui->pushButton;
    checkButton = ui->pushButton_2;
    vedioButton = ui->pushButton_3;
    recordButton->setObjectName("check");
    checkButton->setObjectName("check");
    vedioButton->setObjectName("check");
    showdateLabel = ui->label_3;
    showtimeLabel = ui->label_4;
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);
    raiseLabel();
}
page5::~page5()
{
    delete ui;
}
void page5::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy年 MM月 dd日");
    ui->label_3->setText(str);
    QString str1 = time.toString("hh  :  mm  :  ss");
    ui->label_4->setText(str1);
}

void page5::raiseLabel()
{
    ui->label->raise();
    ui->label_2->raise();
    ui->label_3->raise();
    ui->label_4->raise();
    ui->label_5->raise();
    ui->label_6->raise();
    ui->label_7->raise();
    ui->label_8->raise();
    ui->label_9->raise();
    ui->label_10->raise();
    ui->label_13->raise();
    ui->label_14->raise();
    ui->label_15->raise();
    ui->verticalSlider->raise();
    ui->verticalSlider_2->raise();
    ui->verticalSlider_3->raise();
}
