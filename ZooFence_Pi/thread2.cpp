#include "thread2.h"

bool isAlert;

Thread2::Thread2()
{
    distance_value = 8;
    isAlert = false;
}

void Thread2::run()
{
    DataUpdate dataUpdate;
    while(1)
    {
        dataUpdate.DatabaseOperate();
        if(RealTimeSensor.ray | RealTimeSensor.animal | (RealTimeSensor.distance < distance_value))
        {
            if((!isAlert) && isLogin)  // if alert was triggered and user logined
            {
                emit showAlert();
                qDebug() << "alert!!!!";
                isAlert = true;
            }
        }
        else
        {
            emit stopAlert();
            isAlert = false;
        }
    }
}

