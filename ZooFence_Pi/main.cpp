#include "pageindex.h"
#include "welcomepage.h"
#include "introduce.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    welcomePage w;
//    w.show();
    pageIndex p;
    p.init();
    p.play();
//    p.p1->show();


    return a.exec();
}
