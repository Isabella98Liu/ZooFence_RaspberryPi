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
    int trigger_type;
    searchIndex();
    searchIndex imageInfo(QString);
};

#endif // SEARCHINDEX_H
