#include "voicealert.h"

VoiceAlert::VoiceAlert()
{

}

void VoiceAlert::Play(QString file)  // using mplayer to play the specific mp3 file under 'file' directory
{
    QString folerPath = qApp->applicationDirPath();
    folerPath = folerPath + "/voices/" + file;
    QProcess *voice = new QProcess;
    QString command = QString("mplayer %1").arg(folerPath);
    voice->start(command);  //start the voice play command
}
