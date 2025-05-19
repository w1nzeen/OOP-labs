#include "Func.h"
#include <iostream>

std::string OldElectricitySystem::MatchThinSocket() {
    return "220V\n";
}

std::string NewElectricitySystem::MatchWideSocket() {
    return "220V\n";
}

Adapter::Adapter(OldElectricitySystem* adaptee) : adaptee_(adaptee) {}

std::string Adapter::MatchWideSocket() {
    return adaptee_->MatchThinSocket();
}

void ElectricityConsumer::ChargeNotebook(std::unique_ptr<INewElectricitySystem> electricitySystem) {
    std::cout << electricitySystem->MatchWideSocket();
}