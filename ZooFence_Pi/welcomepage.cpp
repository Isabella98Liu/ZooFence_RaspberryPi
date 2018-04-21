#include "welcomepage.h"
#include "ui_welcomepage.h"
#include "introduce.h"
#include "pageindex.h"

#include <QDebug>

welcomePage::welcomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcomePage)
{
    ui->setupUi(this);
    loadContent();
    loadGif();
    loadText();
}

welcomePage::~welcomePage()
{
    delete ui;
}

void welcomePage::loadGif()
{
    loading = new QMovie(":/.001/Resources/001/loading.gif");
    loading->setScaledSize(QSize(80,80));
    ui->label_2->setMovie(loading);
    loading->start();
}

void welcomePage::loadText()
{
    Text = ui->label_3;
    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(textUpdate()));
    timer1->start(2000);
}

void welcomePage::loadContent()
{
    textContent[0] = "程序初始化...";
    textContent[1] = "连接数据库...";
    textContent[2] = "连接传感器...";
    textContent[3] = "  ";
}


//--------------------------------SLOTS--------------------------------

void welcomePage::textUpdate()
{
    if(textIndex <textNum)
    {
        Text->setText(textContent[textIndex]);
    }
    if(textIndex == textNum)  // if the last text content was displayed, hide everything
    {
        timer1->stop();
        emit switch_index_1_2();
//        emit page.switch_index_1_2();   //emit the signals of switching page
//        welcomePage::destroy(true, true);  //do no destroy the page
        welcomePage::setVisible(false);
    }
    textIndex++;
}





















