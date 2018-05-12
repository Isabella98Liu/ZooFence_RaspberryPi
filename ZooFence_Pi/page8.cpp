#include "page8.h"
#include "ui_page8.h"

page8::page8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page8)
{
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    ui->setupUi(this);
    smallbutton = ui->pushButton;
    bigbutton = ui->pushButton_2;
    pictureLabel = ui->label_2;
    smallbutton->setObjectName("adjustButton");
    bigbutton->setObjectName("adjustButton");
}


page8::~page8()
{
    delete ui;

}

void page8::setInfo(QListWidgetItem* item) // show the detail of the picture
{
    searchIndex info;
    info = info.imageInfo(item->text());
    //set the date text label
    QLabel *DATE = ui->label_5;
    QString date = ( ( QString::number(info.year) + "年" ) + (QString::number(info.month) + "月") ) + (QString::number(info.day) + "日");
    DATE->setText(date);
    //set the time text label
    QLabel *TIME = ui->label_7;
    QString time = ( ( QString::number(info.hour) + "时 ") + (QString::number(info.minute) + "分 ") ) + (QString::number(info.second) + "秒");
    TIME->setText(time);
    //set the trigger type label
    QLabel *TRIGGER = ui->label_9;
    QString triggerText;
    if(info.trigger0 == 1)
        triggerText = QString("无");
    if (info.trigger1 == 1)
        triggerText = triggerText + "\n围栏翻越";
    if (info.trigger2 < 8 )
        triggerText = triggerText + "\n靠近栏杆：" + QString::number(info.trigger2) + "米";
    if (info.trigger3 == 1)
        triggerText =triggerText + "\n动物靠近";
     TRIGGER->setText(triggerText);
}
