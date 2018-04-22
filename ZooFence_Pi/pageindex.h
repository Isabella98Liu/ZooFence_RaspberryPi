#ifndef PAGEINDEX_H
#define PAGEINDEX_H

#include <QObject>

#include "welcomepage.h"
#include "introduce.h"
#include "login.h"

class pageIndex: public QObject
{
    Q_OBJECT

public:
    pageIndex();
    ~pageIndex();
    void init();    // init all pages and resources od the index
    void play();
    //page index resources
    welcomePage *p1;
    introduce *p2;
    login *p4;

signals:


public slots:
    void switch_page_1_2();
    void switch_page_2_3();
    void switch_page_2_4();

};

#endif // PAGEINDEX_H
