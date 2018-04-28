#include "alertpage9.h"
#include "ui_alertpage9.h"

alertPage9::alertPage9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alertPage9)
{
    ui->setupUi(this);
    folderPath = qApp->applicationDirPath() +  QString("/pics/");
    camera = new QCamera(this);
    viewfinder = new QCameraViewfinder(this);
    imageCaputure = new QCameraImageCapture(camera);

    ui->verticalLayout->addWidget(viewfinder);
//    ui->label_2->setScaledContents(true);

    camera->setViewfinder(viewfinder);
    camera->start();
}

alertPage9::~alertPage9()
{
    delete ui;
}

void alertPage9::captureImage()
{

}

void alertPage9::saveImage()
{

}

void alertPage9::displayImage(int, QImage image)
{

}
