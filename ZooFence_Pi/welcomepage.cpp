#include "welcomepage.h"
#include <QPixmap>

welcomePage::welcomePage(QWidget *parent)
    : QWidget(parent)
{

}

welcomePage::~welcomePage()
{
}

void welcomePage::loadPic()
{
    Pic.load(":/.001/Resources/001/welcomePage.png");
    pix_Pic.convertFromImage(Pic);
    scene->addPixmap(pix_Pic);
    view->setScene(scene);
    view->show();
}
