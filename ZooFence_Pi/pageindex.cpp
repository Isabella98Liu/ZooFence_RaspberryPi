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
    connect(p1, SIGNAL(switch_index_1_2()), this, SLOT(switch_page_1_2()));

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



