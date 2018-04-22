#include "alertpage9.h"
#include "ui_alertpage9.h"

alertPage9::alertPage9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alertPage9)
{
    ui->setupUi(this);
}

alertPage9::~alertPage9()
{
    delete ui;
}
