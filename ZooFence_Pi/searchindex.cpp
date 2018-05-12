#include "searchindex.h"

searchIndex::searchIndex()
{
    trigger0 = 0;
    trigger1 = 0;
    trigger2 = 8;
    trigger3 = 0;
}

searchIndex searchIndex::imageInfo(QString name)
{
    searchIndex info;
    QString pattern("(.*)_(.*)_(.*)_(.*)_(.*)_(.*)_(.*)_(.*)_(.*)_(.*).jpg");  // yyyy_MM_dd_hh_mm_ss_type
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
        info.trigger0 = rx.cap(7).toInt();
        info.trigger1 = rx.cap(8).toInt();
        info.trigger2 = rx.cap(9).toInt();
        info.trigger3 = rx.cap(10).toInt();
    }
    return info;
}
