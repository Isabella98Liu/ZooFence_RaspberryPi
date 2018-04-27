#ifndef CAMERA_H
#define CAMERA_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>


namespace Ui {
class Camera;
}

class Camera : public QWidget
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = 0);
    ~Camera();

private:
    Ui::Camera *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;

public slots:
    void captureImage();
    void displayImage(int,QImage);
    void saveImage();

};

#endif // CAMERA_H
