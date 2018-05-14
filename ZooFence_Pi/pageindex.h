#ifndef PAGEINDEX_H
#define PAGEINDEX_H

#include <QObject>
#include <QThread>
#include <QRect>
#include <QDesktopWidget>
#include <QApplication>
#include <QDebug>

#include <QMediaPlayer>
#include <QSoundEffect>
#include <QProcess>
#include <QUrl>

//#include <phonon/audiooutput.h>
//#include <phonon/mediaobject.h>
//#include <phonon/mediasource.h>
//#include <phonon/videowidget.h>

//using namespace Phonon;


#include "welcomepage.h"
#include "introduce.h"
#include "userbook.h"
#include "login.h"
#include "page5.h"
#include "page6.h"
#include "page7.h"
#include "alertpage9.h"
#include "page10.h"

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
    QMediaPlayer *p1_song;

public slots:
    void switch_page_1_2();
    void switch_page_2_3();
    void switch_page_2_4();
    void switch_page_4_5();
    void switch_page_5_6();
    void switch_page_5_7();
    void switch_page_5_10();

    void return_page_3_2();
    void return_page_4_2();
    void return_page_5_4();

    void showAlertPage9();
//    void stopAlertPage9();
    void loading();

};

#endif // PAGEINDEX_H
