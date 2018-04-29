#include "searchindex.h"

searchIndex::searchIndex()
{

}

searchIndex searchIndex::imageInfo(QString name)
{
    searchIndex info;
    QString pattern("(.*)_(.*)_(.*)_(.*)_(.*)_(.*)_(.*).jpg");  // yyyy_MM_dd_hh_mm_ss_type
    QRegExp rx(pattern);
    int pos = name.indexOf(rx);
    if(pos >= 0)
    {
        info.year = rx.cap(1).toInt();
        info.month = rx.cap(2).toInt();
        info.day = rx.cap(3).toInt();
        info.hour = rx.cap(4).toInt();
        info.minute = rx.cap(5).toInt();
        info.second = rx.cap(6).toInt();
        info.trigger_type = rx.cap(7).toInt();
    }
    return info;
}
