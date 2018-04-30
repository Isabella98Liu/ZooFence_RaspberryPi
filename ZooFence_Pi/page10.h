#ifndef PAGE10_H
#define PAGE10_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QDateTime>
#include <QString>
#include <QFile>
#include <QCloseEvent>
#include <QDesktopWidget>

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
    QString folderPath;

public slots:
    void captureImage();
    void displayImage(int, QImage);
    void saveImage();

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // PAGE10_H
