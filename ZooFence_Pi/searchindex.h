#ifndef SEARCHINDEX_H
#define SEARCHINDEX_H

#include <QString>
#include <QRegExp>

class searchIndex
{
public:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int trigger0;  // if there is no trigger set, then 1
    int trigger1;  // if the ray trigger was activated, then 1, else 0
    int trigger2;  // if the distance trigger was set, then xxx， else 8
    int trigger3;  // if the animal approach trigger was activated, then 1, else 0
    searchIndex();
    searchIndex imageInfo(QString);
};

#endif // SEARCHINDEX_H
