#include "qss.h"
#include "pageindex.h"
#include "welcomepage.h"
#include "introduce.h"
#include "page5.h"
#include "page6.h"
#include "page7.h"
#include "page8.h"
#include "alertpage9.h"
#include "page10.h"

#include <QFont>
#include <QApplication>
#include <QDir>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont newFont("STKaiti", 12, -1 , false);
    a.setFont(newFont);

    QDir(qApp->applicationDirPath()).mkdir("pics");

    //load qss style sheet
    QssLoad::setStyle(":/qss/QSS/page2.qss");

    pageIndex p;
    p.init();
    p.play();

//    alertPage9 w;
//    w.show();

    return a.exec();
}
