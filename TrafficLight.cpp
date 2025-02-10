#include "TrafficLight.h"

TrafficLight::TrafficLight()
{
    currentColor = LightColor::RED; // Default state
}

void TrafficLight::setLightFromUser()
{
    int choice;
    std::cout << "\nEnter Traffic Light Color (1: RED, 2: YELLOW, 3: GREEN): ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        currentColor = LightColor::RED;
        break;
    case 2:
        currentColor = LightColor::YELLOW;
        break;
    case 3:
        currentColor = LightColor::GREEN;
        break;
    default:
        std::cout << "Invalid input! Defaulting to RED.\n";
        currentColor = LightColor::RED;
    }
}

void TrafficLight::displayLight()
{
    if (currentColor == LightColor::RED)
        std::cout << "🚦 Traffic Light: RED (STOP!)\n";
    else if (currentColor == LightColor::YELLOW)
        std::cout << "🚦 Traffic Light: YELLOW (SLOW DOWN!)\n";
    else
        std::cout << "🚦 Traffic Light: GREEN (GO!)\n";
}

LightColor TrafficLight::getCurrentColor()
{
    return currentColor;
}
