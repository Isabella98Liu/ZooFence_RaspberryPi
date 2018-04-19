#include "welcomepage.h"
#include "ui_welcomepage.h"

welcomePage::welcomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcomePage)
{
    ui->setupUi(this);
}

welcomePage::~welcomePage()
{
    delete ui;
}

void welcomePage::loadGif()
{
    loading = new QMovie(":/.001/Resources/001/loading.gif");
    loading->setScaledSize(QSize(100,100));
    ui->label_2->setMovie(loading);
    loading->start();
}
