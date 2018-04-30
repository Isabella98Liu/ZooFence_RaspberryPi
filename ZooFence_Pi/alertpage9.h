#ifndef ALERTPAGE9_H
#define ALERTPAGE9_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QDateTime>
#include <QString>
#include <QFile>
#include <QDesktopWidget>

namespace Ui {
class alertPage9;
}

class alertPage9 : public QWidget
{
    Q_OBJECT

public:
    explicit alertPage9(QWidget *parent = 0);
    ~alertPage9();

private:
    Ui::alertPage9 *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCaputure;
    QString folderPath;

public slots:
    void captureImage();
    void displayImage(int, QImage);
    void saveImage();
};

#endif // ALERTPAGE9_H
