#include "qss.h"
#include "pageindex.h"
#include "welcomepage.h"
#include "introduce.h"
#include "page5.h"
#include "page6.h"
#include "page7.h"
#include "page8.h"
#include "alertpage9.h"
#include "page10.h"
#include "dataupdate.h"
#include "sensor.h"
#include "thread2.h"

#include <QFont>
#include <QApplication>
#include <QDir>
#include <QString>
#include <QDebug>
#include <QObject>
#include <QMediaPlayer>
#include <QUrl>
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Load font style
    QFont newFont("STKaiti", 12, -1 , false);
    a.setFont(newFont);

    //Thread to update sensor data
    Thread2 sensor;
    sensor.start();

    //Create foler to save captured picture
    QDir(qApp->applicationDirPath()).mkdir("pics");

    //Load qss style sheet
    QssLoad::setStyle(":/qss/QSS/page2.qss");

    //Load main page
    pageIndex p;
    QObject::connect(&sensor, SIGNAL(showAlert()), &p, SLOT(showAlertPage9()));
//    QObject::connect(&sensor, SIGNAL(stopAlert()), &p, SLOT(stopAlertPage9()));
    p.init();
    p.play();

    QProcess *process = new QProcess;
    QString s;
    s = QString("mplayer %1").arg("welcome.mp3");
    process->start(s);

    return a.exec();
}
