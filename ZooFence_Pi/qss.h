#ifndef QSS_H
#define QSS_H

#include <QFile>
#include <QApplication>

class QssLoad
{
public:
    static void setStyle(const QString &style)
    {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

#endif // QSS_H
