#include "camera.h"
#include "ui_camera.h"

Camera::Camera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);
    camera = new QCamera(this);
    viewfinder = new QCameraViewfinder(this);
    imageCapture = new QCameraImageCapture(camera);

    ui->ver111->addWidget(viewfinder);
    ui->label->setScaledContents(true);

    camera->setViewfinder(viewfinder);
    camera->start();
    connect(imageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(displayImage(int,QImage)));
    connect(ui->capture, SIGNAL(clicked()), this, SLOT(captureImage()));
    connect(ui->save, SIGNAL(clicked()), this, SLOT(saveImage()));
    connect(ui->quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

Camera::~Camera()
{
    delete ui;
}

void Camera::captureImage()
{
    ui->statusBar->showMessage(tr("capturing..."), 1000);
    imageCapture->capture();
}

void Camera::displayImage(int , QImage image)
{
    ui->label->setPixmap(QPixmap::fromImage(image));
    ui->statusBar->showMessage(tr("capture OK!"), 5000);
}

void Camera::saveImage()
{
    QString fileName=QFileDialog::getSaveFileName(this, tr("save file"), QDir::homePath(), tr("jpegfile(*.jpg)"));
    if(fileName.isEmpty()) {
    ui->statusBar->showMessage(tr("save cancel"), 5000);
    return;
    }
    const QPixmap* pixmap=ui->label->pixmap();
    if(pixmap) {
    pixmap->save(fileName);
    ui->statusBar->showMessage(tr("save OK"), 5000);
    }
}
