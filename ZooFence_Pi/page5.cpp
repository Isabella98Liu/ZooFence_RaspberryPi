#include "page5.h"
#include "ui_page5.h"

#include <QDebug>

page5::page5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page5)
{
//    QDesktopWidget* desktop = QApplication::desktop();
//    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    this->setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);
    recordButton = ui->pushButton;
    checkButton = ui->pushButton_2;
    vedioButton = ui->pushButton_3;
    returnButton = ui->pushButton_4;
    recordButton->setObjectName("check");
    checkButton->setObjectName("check");
    vedioButton->setObjectName("check");
    returnButton->setObjectName("returnButton");
    showdateLabel = ui->label_3;
    showtimeLabel = ui->label_4;
    tmpSlider = ui->verticalSlider;
    humSlider = ui->verticalSlider_2;
    crowdSlider = ui->verticalSlider_3;
    tmp = ui->label_8;
    hum = ui->label_9;
    crowd = ui->label_10;
    tmp->setText("26");
    hum->setText("60");
    crowd->setText("60");
    sensorDataUpdate();
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

void page5::on_pushButton_4_clicked()  // if the return button was pressed
{
    emit return_index_5_4();
}

void page5::on_pushButton_clicked()  // if the record button was pressed
{
    emit switch_index_5_6();
}

void page5::on_pushButton_2_clicked()  // if the check button was pressed
{
    if(Check_device_status())  // if the device was in good status
    {
        emit switch_index_5_7();
    }
}

void page5::on_pushButton_3_clicked()  // if the real time video button was pressed
{
    emit switch_index_5_10();
}

bool page5::Check_device_status()  // check if the all device is in good status
{
    return true;
}

void page5::sensorDataUpdate()
{
    qDebug() << tmp->text().toInt() << "hum :" << hum->text().toInt() << "crowd :" << crowd->text().toInt();
    tmpSlider->setValue(tmp->text().toInt());
    humSlider->setValue(hum->text().toInt());
    crowdSlider->setValue(crowd->text().toInt());
}
