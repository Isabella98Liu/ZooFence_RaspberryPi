#ifndef THREAD2_H
#define THREAD2_H

//a new thread to read sensor data from sqlite3 and update the global sensor data

#include <QObject>
#include <QThread>
#include <QDebug>

#include "dataupdate.h"
#include "sensor.h"
#include "pageindex.h"

extern bool isAlert;

class Thread2: public QThread
{
    Q_OBJECT
public:
    Thread2();
    int distance_value;

protected:
    void run();

signals:
    void showAlert();
    void stopAlert();

};

#endif // THREAD2_H
