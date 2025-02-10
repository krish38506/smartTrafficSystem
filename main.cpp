#include "TrafficLight.h"
#include "Vehicle.h"
#include <iostream>

void Vehicle::reactToTrafficLight(TrafficLight &light)
{
    if (light.getCurrentColor() == LightColor::RED)
        std::cout << "🚗 Vehicle: Stopping at the red light.\n";
    else if (light.getCurrentColor() == LightColor::YELLOW)
        std::cout << "🚗 Vehicle: Slowing down at the yellow light.\n";
    else
        std::cout << "🚗 Vehicle: Moving through the green light.\n";
}

int main()
{
    TrafficLight light;
    Vehicle car;
    char choice;

    do
    {
        light.setLightFromUser(); // Take user input for the light
        light.displayLight();
        car.reactToTrafficLight(light);

        std::cout << "\nDo you want to change the light again? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Traffic simulation ended.\n";
    return 0;
}
