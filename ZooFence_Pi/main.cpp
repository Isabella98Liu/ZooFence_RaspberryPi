#include "welcomepage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcomePage w;
    w.show();

    return a.exec();
}
