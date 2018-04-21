#include "qss.h"
#include "pageindex.h"
#include "welcomepage.h"
#include "introduce.h"

#include <QFont>
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont newFont("Helvetica", 8, QFont::Bold, true);
    a.setFont(newFont);

    //load qss style sheet
    QssLoad::setStyle(":/qss/QSS/page2.qss");

    pageIndex p;
    p.init();
    p.play();

    return a.exec();
}
