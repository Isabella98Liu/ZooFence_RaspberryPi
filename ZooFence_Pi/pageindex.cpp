#include "pageindex.h"

bool isLogin;

pageIndex::pageIndex()
{
    isLogin = false;
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

void pageIndex::AlertVoicePlay(QString file)
{

}

void pageIndex::play()
{
    p1->show();    // show the welcome page while the program start;
    VoiceAlert alert;
    alert.Play(QString("welcome.mp3"));  // the voice file should be put under AppAppication's foler/voices/xxx.mp3

//    QMediaPlayer *p1_song = new QMediaPlayer;
//    p1_song->setMedia(QUrl::fromLocalFile("/Users/Isabella/Qt_Softwares/ZooFence_RaspberryPi/build-ZooFence_Pi-Desktop_Qt_5_11_0_clang_64bit2-Debug/ZooFence_Pi.app/Contents/MacOS/voices/welcome.mp3"));
//    p1_song->setVolume(60);
//    p1_song->play();

//    //play the alert voice when welcome page generated
//    QProcess *process = new QProcess;
//    QString s;
//    s = QString("mplayer %1").arg("welcome.mp3");
//    process->start(s);

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
    VoiceAlert alert;
    alert.Play(QString("login.mp3"));
}

void pageIndex::switch_page_4_5()
{
    p4->setVisible(false);
    p5->show();
    isLogin = true;
}

void pageIndex::switch_page_5_6()
{
    page6 *p6 = new page6;
    p6->show();
    VoiceAlert alert;
    alert.Play(QString("search.mp3"));
}

void pageIndex::switch_page_5_7()
{
    page7 *p7 = new page7;
    p7->show();
    VoiceAlert alert;
    alert.Play(QString("status.mp3"));
}

void pageIndex::switch_page_5_10()
{
    page10 *p10 = new page10;
    p10->show();
    VoiceAlert alert;
    alert.Play(QString("Camera.mp3"));
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
    VoiceAlert alert;
    alert.Play(QString("login.mp3"));
}

//------------------------------SLOTS FOR ALERT PAGE------------------------------
void pageIndex::showAlertPage9()
{
    qDebug() << "show alert page!!";
    alertPage9 *p9 = new alertPage9;
    p9->show();
    p9->captureImage();
    VoiceAlert alert;
    if(RealTimeSensor.ray == 1)  // if the ray sensor was triggered
        alert.Play(QString("Across.mp3"));
    else if(RealTimeSensor.distance < 8)  // if the distance sensor was tirggered
        alert.Play(QString("Approach.mp3"));
    else if(RealTimeSensor.animal == 1)  // if the animal sensor was triggered
        alert.Play(QString("Animal.mp3"));
}

void pageIndex::stopAlertPage9()
{
    qDebug() << "stop alert page!!";
    //p9->hide();
}




