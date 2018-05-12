#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
public:
    int tmp;
    int hum;
    bool ray;   //whether the ray sensor was generated
    int distance;  // the real-time distance between people and the sensor
    bool animal;
    Sensor();
};

#endif // SENSOR_H
