#include "Func.h"


int Toy::total_number_ = 0;

Toy::Toy(const std::string& name) : name_(name), id_(total_number_++) {}
Toy::Toy() : name_(""), id_(total_number_++) {}
std::string Toy::GetName() const { return name_; }
void Toy::SetName(const std::string& name) { name_ = name; }
int Toy::GetId() const { return id_; }

Car::Car(const std::string& name) : Toy(name) {}
Car::Car() : Toy() {}

Robot::Robot(const std::string& name) : Toy(name) {}
Robot::Robot() : Toy() {}

PlasticCar::PlasticCar() : Car("Plastic Car") {}
MetalCar::MetalCar() : Car("Metal Car") {}
PlasticRobot::PlasticRobot() : Robot("Plastic Robot") {}
MetalRobot::MetalRobot() : Robot("Metal Robot") {}

std::unique_ptr<Car> PlasticToysFactory::GetCar() {
    return std::make_unique<PlasticCar>();
}
std::unique_ptr<Robot> PlasticToysFactory::GetRobot() {
    return std::make_unique<PlasticRobot>();
}

std::unique_ptr<Car> MetalToysFactory::GetCar() {
    return std::make_unique<MetalCar>();
}
std::unique_ptr<Robot> MetalToysFactory::GetRobot() {
    return std::make_unique<MetalRobot>();
}