#include "dataupdate.h"

Sensor RealTimeSensor;

DataUpdate::DataUpdate()
{
    database = QSqlDatabase::addDatabase("QSQLITE");  // create a database
    folderPath = qApp->applicationDirPath();  //get the directory path of the picture folder
    database.setDatabaseName(QString(folderPath + "/SensorData.db"));  //rename the database, if the database does not exists, then create, else if it exists, then use
}

void DataUpdate::DatabaseOperate()  // insert data into the database
{
    if(database.open())
    {
//        qDebug() << "database opened!";
        QSqlQuery sql_query;
        SensorDataUpdate(sql_query);  // get the last record of the sensor and store it into the program class
    }
    database.close();
}

void DataUpdate::DatabaseCreate(QSqlQuery sql_query)  // create table
{
    if(database.open())
    {
        QString create_sql = "CREATE TABLE SENSOR (id INT PRIMARY KEY, tmp INT, hum INT, ray BOOL, distance INT, animal BOOL)";
        sql_query.prepare(create_sql);
        if(!sql_query.exec())
        {
            qDebug() << "Table Create Failed!";
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "Table Created Successfully!";
        }
    }
    database.close();
}

void DataUpdate::DatabaseInsert(QSqlQuery sql_query)  // insert data into table
{
    if(database.open())
    {
        QString insert_sql = "INSERT INTO SENSOR VALUES (?,?,?,?,?,?)";  // insert value into table
        sql_query.prepare(insert_sql);
        QVariantList GroupIDs;
        QVariantList GroupTMPs;
        QVariantList GroupHUMs;
        QVariantList GroupRAYs;
        QVariantList GroupDISTANCEs;
        QVariantList GroupANIMALs;

        GroupIDs.append(0);
        GroupTMPs.append(25);
        GroupHUMs.append(79);
        GroupRAYs.append(false);
        GroupDISTANCEs.append(0);
        GroupANIMALs.append(false);

        sql_query.addBindValue(GroupIDs);
        sql_query.addBindValue(GroupTMPs);
        sql_query.addBindValue(GroupHUMs);
        sql_query.addBindValue(GroupRAYs);
        sql_query.addBindValue(GroupDISTANCEs);
        sql_query.addBindValue(GroupANIMALs);

        if(!sql_query.execBatch())
        {
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "Insert Success!!!";
        }
    }
    database.close();
}

void DataUpdate::DatavbaseSelect(QSqlQuery sql_query)  // select all factor from the table in database
{
    QString select_all_sql = "SELECT * FROM SENSOR";  //select all members from sensor databas
    sql_query.prepare(select_all_sql);
    if(!sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            int tmps = sql_query.value(1).toInt();
            int hums = sql_query.value(2).toInt();
            bool rays = sql_query.value(3).toBool();
            int distances = sql_query.value(4).toInt();
            bool animals = sql_query.value(5).toBool();
            qDebug() << QString("id: %1   tmps: %2   hums: %3   rays: %4  distance: %5  animals: %6").arg(id).arg(tmps).arg(hums).arg(rays).arg(distances).arg(animals);
        }
    }
}

void DataUpdate::SensorDataUpdate(QSqlQuery sql_query)  // update the real time data of sensors and store it
{
    QString select_last_data = "SELECT * FROM SENSOR ORDER BY ID DESC LIMIT 0,1";
    sql_query.prepare(select_last_data);
    if(!sql_query.exec())
    {
        qDebug() << "Select Last Record Failed!";
        qDebug() << sql_query.lastError();
    }
    else
    {
        while (sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            int tmps = sql_query.value(1).toInt();
            int hums = sql_query.value(2).toInt();
            bool rays = sql_query.value(3).toBool();
            int distances = sql_query.value(4).toInt();
            bool animals = sql_query.value(5).toBool();
            // store data into the program class
            RealTimeSensor.tmp = tmps;
            RealTimeSensor.hum = hums;
            RealTimeSensor.ray = rays;
            RealTimeSensor.distance = distances;
            RealTimeSensor.animal = animals;
        }
    }
}
