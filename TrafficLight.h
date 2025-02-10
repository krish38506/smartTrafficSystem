#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <iostream>

enum class LightColor
{
    RED,
    YELLOW,
    GREEN
};

class TrafficLight
{
private:
    LightColor currentColor;

public:
    TrafficLight();
    void setLightFromUser(); // New function to take user input
    void displayLight();
    LightColor getCurrentColor();
};

#endif
