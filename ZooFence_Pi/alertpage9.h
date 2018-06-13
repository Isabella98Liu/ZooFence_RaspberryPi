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
#include <QCloseEvent>
#include <QDesktopWidget>
#include <QTimer>
#include <QLabel>

#include "dataupdate.h"
#include "thread2.h"

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
    QString fileName;
    QTimer *timer1;
    int captureCount;
    int captureIndex;
    QString alertType(QString);

public slots:
    void captureImage();
    void saveImage(int, QImage);
    void showInfo();

protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void on_pushButton_3_clicked();
};

#endif // ALERTPAGE9_H
