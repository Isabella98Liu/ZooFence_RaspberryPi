#ifndef PAGEINDEX_H
#define PAGEINDEX_H

#include <QObject>

#include "welcomepage.h"
#include "introduce.h"
#include "userbook.h"
#include "login.h"
#include "page5.h"

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
    userBook *p3;
    login *p4;
    page5 *p5;

signals:


public slots:
    void switch_page_1_2();
    void switch_page_2_3();
    void switch_page_2_4();
    void switch_page_4_5();

    void return_page_3_2();
    void return_page_4_2();

};

#endif // PAGEINDEX_H
