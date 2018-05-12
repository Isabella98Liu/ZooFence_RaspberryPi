#ifndef DATAUPDATE_H
#define DATAUPDATE_H

#include <QDebug>
#include <QString>
#include <QDebug>
#include <QTime>
#include <QApplication>
//--------SQLite Database head file------
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
//----------------------------------------
#include "sensor.h"

extern Sensor RealTimeSensor;

class DataUpdate
{
public:
    DataUpdate();
    QSqlDatabase database;
    QString folderPath;
    void DatabaseOperate();
    void DatabaseCreate(QSqlQuery);
    void DatabaseInsert(QSqlQuery);
    void DatavbaseSelect(QSqlQuery);
    void SensorDataUpdate(QSqlQuery);

private:
    bool stopped;  // whether current thread was stopped
    bool databaseLoaded = false; // whether the database was loaded

protected:
    void run();
};

#endif // DATAUPDATE_H
