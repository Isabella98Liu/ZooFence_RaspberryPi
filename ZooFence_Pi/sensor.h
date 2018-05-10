#ifndef SENSOR_H
#define SENSOR_H


class Sensor
{
public:
    int tmp;
    int hum;
    int crowd;
    bool ray;
    int distance;
    int press;
    Sensor();
};

#endif // SENSOR_H
