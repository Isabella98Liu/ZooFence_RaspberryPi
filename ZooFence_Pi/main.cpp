#include "welcomepage.h"

#include <QApplication>
#include <QPixmap>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    welcomePage w;
    w.loadGif();   //loading the start gif of the welcomePage
    w.show();


    return a.exec();
}
