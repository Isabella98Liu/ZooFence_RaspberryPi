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
    p3 = new userBook();
    p4 = new login();
    p5 = new page5();

    connect(p1, SIGNAL(switch_index_1_2()), this, SLOT(switch_page_1_2()));
    connect(p2, SIGNAL(switch_index_2_3()), this, SLOT(switch_page_2_3()));
    connect(p2, SIGNAL(switch_index_2_4()), this, SLOT(switch_page_2_4()));
    connect(p4, SIGNAL(switch_index_4_5()), this, SLOT(switch_page_4_5()));
    connect(p5, SIGNAL(switch_index_5_6()), this, SLOT(switch_page_5_6()));
    connect(p5, SIGNAL(switch_index_5_7()), this, SLOT(switch_page_5_7()));
    connect(p5, SIGNAL(switch_index_5_10()),this, SLOT(switch_page_5_10()));

    connect(p3, SIGNAL(return_index_3_2()), this, SLOT(return_page_3_2()));
    connect(p4, SIGNAL(return_index_4_2()), this, SLOT(return_page_4_2()));
    connect(p5, SIGNAL(return_index_5_4()), this, SLOT(return_page_5_4()));
}

void pageIndex::play()
{
    p1->show();    // show the welcome page while the program start;
//    QMediaPlayer *p1_song = new QMediaPlayer;
//    p1_song->setMedia(QUrl::fromLocalFile("/home/pi/Qt/ZooFence/ZooFence_RaspberryPi/build-ZooFence_Pi-Raspi-Debug/voices/welcome.mp3"));
//    p1_song->setVolume(60);
//    p1_song->play();

//    QSoundEffect effect;
//    effect.setSource(QUrl::fromLocalFile("/home/pi/Qt/ZooFence/ZooFence_RaspberryPi/build-ZooFence_Pi-Raspi-Debug/voices/welcome.mp3"));
//    effect.setVolume(2.0f);
//    effect.play();

//    QProcess::execute("ls");
//    QProcess voice;
//    voice.start("mplayer",QStringList() <<"/home/pi/welcome.mp3");
//    QProcess::execute("mplayer /home/pi/welcome.mp3");
//    QProcess::execute("ls");

//    voice->start("cd " + qApp->applicationDirPath() + "/voices");
//    voice->start("mplayer welcome.mp3");

//    QProcess::execute(QString("cd " + qApp->applicationDirPath() + "/voices"));
//    QProcess::execute("ls");
//    QProcess::execute("mplayer welcome.mp3");

}


//--------------------------------SLOTS-------------------------------------------

void pageIndex::switch_page_1_2()
{
    p2->show();
}

void pageIndex::switch_page_2_3()
{
    p3->show();
}

void pageIndex::switch_page_2_4()
{
    p4->show();
}

void pageIndex::switch_page_4_5()
{
    p4->setVisible(false);
    p5->show();
}

void pageIndex::switch_page_5_6()
{
    page6 *p6 = new page6;
    p6->show();
}

void pageIndex::switch_page_5_7()
{
    page7 *p7 = new page7;
    p7->show();
}

void pageIndex::switch_page_5_10()
{
    page10 *p10 = new page10;
    p10->show();
}

//----------------------------------------------

void pageIndex::return_page_3_2()
{
    p3->setVisible(false);
    p2->setVisible(true);
}

void pageIndex::return_page_4_2()
{
    p4->setVisible(false);
    p2->setVisible(true);
}

void pageIndex::return_page_5_4()
{
    p5->setVisible(false);
    p4->setVisible(true);
}

//------------------------------SLOTS FOR ALERT PAGE------------------------------
void pageIndex::showAlertPage9()
{
    qDebug() << "show alert page!!";
    alertPage9 *p9 = new alertPage9;
    p9->show();
    p9->captureImage();
}

//void pageIndex::stopAlertPage9()
//{
//    qDebug() << "stop alert page!!";
//    p9->hide();
//}




