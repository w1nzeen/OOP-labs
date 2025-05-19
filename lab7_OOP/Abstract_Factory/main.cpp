#include "Func.h"
#include <iostream>

int main() {

    std::unique_ptr<IToyFactory> toy_factory = std::make_unique<PlasticToysFactory>();
    auto car = toy_factory->GetCar();
    auto robot = toy_factory->GetRobot();

    std::cout << "I've got " << car->GetName() << " (ID: " << car->GetId() << ") and "
              << robot->GetName() << " (ID: " << robot->GetId() << ")" << std::endl;

    toy_factory = std::make_unique<MetalToysFactory>();
    car = toy_factory->GetCar();
    robot = toy_factory->GetRobot();

    std::cout << "I've got " << car->GetName() << " (ID: " << car->GetId() << ") and "
              << robot->GetName() << " (ID: " << robot->GetId() << ")" << std::endl;

    std::cin.get();
    return 0;
}