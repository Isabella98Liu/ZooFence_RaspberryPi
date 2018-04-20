#include "welcomepage.h"
#include "introduce.h"

#include <QApplication>
#include <QDebug>

static bool switch_index = false;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    welcomePage w;
    w.show();

    if(switch_index)
    {
        qDebug() <<"11111";
        introduce p2;
        p2.show();
    }

    return a.exec();
}
