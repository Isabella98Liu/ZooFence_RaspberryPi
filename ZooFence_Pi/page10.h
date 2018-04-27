#ifndef PAGE10_H
#define PAGE10_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>


namespace Ui {
class page10;
}

class page10 : public QWidget
{
    Q_OBJECT

public:
    explicit page10(QWidget *parent = 0);
    ~page10();

private:
    Ui::page10 *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCaputure;

public slots:
    void captureImage();
    void displayImage(int, QImage);
    void saveImage();
};

#endif // PAGE10_H
