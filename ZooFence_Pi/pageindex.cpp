#include "pageindex.h"

pageIndex::pageIndex()
{

}

pageIndex::~pageIndex()
{

}

void pageIndex::init( )
{
    p1 = new welcomePage();
    p2 = new introduce;
    p4 = new login();

    connect(p1, SIGNAL(switch_index_1_2()), this, SLOT(switch_page_1_2()));
    connect(p2, SIGNAL(switch_index_2_4()), this, SLOT(switch_page_2_4()));

}

void pageIndex::play()
{
    p1->show();    // show the welcome page while the program start;
}


//--------------------------------SLOTS-------------------------------------------

void pageIndex::switch_page_1_2()
{
    p2->show();
}

void pageIndex::switch_page_2_3()
{

}

void pageIndex::switch_page_2_4()
{
    p4->show();
}



