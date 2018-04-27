#include "page10.h"
#include "ui_page10.h"

page10::page10(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page10)
{
    ui->setupUi(this);
    camera = new QCamera(this);
    viewfinder = new QCameraViewfinder(this);
    imageCaputure = new QCameraImageCapture(camera);

    ui->verticalLayout->addWidget(viewfinder);
    ui->label_2->setScaledContents(true);

    camera->setViewfinder(viewfinder);
    camera->start();
    connect(imageCaputure, SIGNAL(imageCaptured(int,QImage)), this, SLOT(displayImage(int,QImage)));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(captureImage()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(saveImage()));
}

page10::~page10()
{
    delete ui;
}

void page10::captureImage()
{
    imageCaputure->capture();
}

void page10::displayImage(int, QImage image)
{
    ui->label_2->setPixmap(QPixmap::fromImage(image));
}

void page10::saveImage()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::homePath(), tr("jpegfile(*.jpg)"));
    if(fileName.isEmpty())
    {
        return;
    }
    const QPixmap* pixmap = ui->label_2->pixmap();
    if(pixmap)
    {
        pixmap->save(fileName);
    }
}
