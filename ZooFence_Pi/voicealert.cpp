#include "voicealert.h"

VoiceAlert::VoiceAlert()
{

}

void VoiceAlert::Play(QString file)  // using mplayer to play the specific mp3 file under 'file' directory
{
    QString folderPath = qApp->applicationDirPath();
    folderPath = folderPath + "/voices/" + file;
    QProcess *voice = new QProcess;
    QString command = QString("mplayer %1").arg(folderPath);
    voice->start(command);  //start the voice play command
}

//void VoiceAlert::LightSoundAlert()  // enable light & sound alert module when alert generated
//{
//    QString folderPath = qApp->applicationDirPath();
//    folderPath = folderPath + "Light_And_Sound_GPIO.py";
//    QProcess *LightAlert = QString("python %1").arg(folderPath);
//    LightAlert->start(LightAlert);  // enable the light and voice alert module using python file
//}
