#pragma once
#include <string>
#include <memory>

class OldElectricitySystem {
public:
    std::string MatchThinSocket();
};

class INewElectricitySystem {
public:
    virtual std::string MatchWideSocket() = 0;
    virtual ~INewElectricitySystem() = default;
};

class NewElectricitySystem : public INewElectricitySystem {
public:
    std::string MatchWideSocket() override;
};

class Adapter : public INewElectricitySystem {
private:
    OldElectricitySystem* adaptee_;
public:
    Adapter(OldElectricitySystem* adaptee);
    std::string MatchWideSocket() override;
};

class ElectricityConsumer {
public:
    static void ChargeNotebook(std::unique_ptr<INewElectricitySystem> electricitySystem);
};