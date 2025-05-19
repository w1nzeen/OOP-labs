#pragma once
#include <string>
#include <memory>

class Toy {
protected:
    std::string name_;
    int id_;
    static int total_number_;

public:
    Toy(const std::string& name);
    Toy();

    std::string GetName() const;
    void SetName(const std::string& name);
    int GetId() const;
};

class Car : public Toy {
public:
    Car(const std::string& name);
    Car();
};

class Robot : public Toy {
public:
    Robot(const std::string& name);
    Robot();
};

class PlasticCar : public Car {
public:
    PlasticCar();
};

class MetalCar : public Car {
public:
    MetalCar();
};

class PlasticRobot : public Robot {
public:
    PlasticRobot();
};

class MetalRobot : public Robot {
public:
    MetalRobot();
};

class IToyFactory {
public:
    virtual std::unique_ptr<Car> GetCar() = 0;
    virtual std::unique_ptr<Robot> GetRobot() = 0;
    virtual ~IToyFactory() = default;
};

class PlasticToysFactory : public IToyFactory {
public:
    std::unique_ptr<Car> GetCar() override;
    std::unique_ptr<Robot> GetRobot() override;
};

class MetalToysFactory : public IToyFactory {
public:
    std::unique_ptr<Car> GetCar() override;
    std::unique_ptr<Robot> GetRobot() override;
};