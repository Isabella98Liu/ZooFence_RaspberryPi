#ifndef DATAUPDATE_H
#define DATAUPDATE_H

#include <QObject>
#include <QThread>

class DataUpdate : public QThread
{
    Q_OBJECT
public:
    DataUpdate();

private:
    bool stopped;  // whether current thread was stopped

protected:
    void run();
};

#endif // DATAUPDATE_H
