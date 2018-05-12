#include "alertpage9.h"
#include "ui_alertpage9.h"

alertPage9::alertPage9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alertPage9)
{
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    ui->setupUi(this);
    folderPath = qApp->applicationDirPath() +  QString("/pics/");
    captureCount = 10;  // capture 10 pics when activated
    captureIndex = 0;
    camera = new QCamera(this);
    viewfinder = new QCameraViewfinder(this);
    imageCaputure = new QCameraImageCapture(camera);
    // timer for capture image
    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(captureImage()));
    timer1->start(1000);
    // timer for uodate time
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showInfo()));
    timer->start(1000);

    connect(imageCaputure,SIGNAL(imageCaptured(int,QImage)), this, SLOT(saveImage(int,QImage)));

    ui->verticalLayout->addWidget(viewfinder);

    camera->setViewfinder(viewfinder);
    camera->start();

}

alertPage9::~alertPage9()
{
    delete ui;
}

void alertPage9::captureImage()
{
    if(captureIndex < captureCount)
    {
        qDebug() << "Pics " << captureIndex << "Captured!!";
        imageCaputure->capture();
    }
    if(captureIndex == captureCount)
    {
        timer1->stop();
    }
    captureIndex++;
}


void alertPage9::closeEvent(QCloseEvent *event)
{
    delete this;
}

QString alertPage9::alertType(QString fileName)  // change the fileName according to the alert type
{
    if(RealTimeSensor.ray == 1)
        fileName = fileName + "_1";
    else
        fileName = fileName + "_0";

    if(RealTimeSensor.distance < 8)
        fileName = fileName + "_" + QString::number(RealTimeSensor.distance);
    else
        fileName = fileName + "_8";

    if(RealTimeSensor.animal == 1)
        fileName = fileName + "_1";
    else
        fileName = fileName + "_0";

    return fileName;
}

void alertPage9::showInfo()
{
    QLabel *date = ui->label_2;
    QLabel *time = ui->label_7;
    QLabel *TRIGGER = ui->label_8;
    QDateTime Time = QDateTime::currentDateTime();
    date->setText(Time.toString("yyyy年MM月dd日"));
    time->setText(Time.toString("hh时mm分ss秒"));
    QString triggerText;
    if (RealTimeSensor.ray == 1)
        triggerText = triggerText + "\n围栏翻越";
    if (RealTimeSensor.distance < 8 )
        triggerText = triggerText + "\n靠近栏杆：" + QString::number(RealTimeSensor.distance) + "米";
    if (RealTimeSensor.animal == 1)
        triggerText =triggerText + "\n动物靠近";
     TRIGGER->setText(triggerText);
}

//----------------------------SLOT-----------------------------------
void alertPage9::saveImage(int i, QImage img)
{
    QDateTime time = QDateTime::currentDateTime();
    fileName = folderPath + time.toString("yyyy_MM_dd_hh_mm_ss_0");
    fileName = alertType(fileName);  // set the file's trigger type
    if(!img.isNull())
    {
        qDebug() << fileName;
        QFile file(QString(fileName + ".jpg"));
        file.open(QIODevice::WriteOnly);
        img.save(&file, "JPG");
    }
}

void alertPage9::on_pushButton_3_clicked()  // if the stop button was clicked
{
    close();
}
