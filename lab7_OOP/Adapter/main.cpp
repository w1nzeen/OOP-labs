#include "Func.h"
#include <iostream>
#include <memory>

int main() {
    auto newSystem = std::make_unique<NewElectricitySystem>();
    ElectricityConsumer::ChargeNotebook(std::move(newSystem));

    auto oldSystem = std::make_unique<OldElectricitySystem>();
    auto adapter = std::make_unique<Adapter>(oldSystem.get());
    ElectricityConsumer::ChargeNotebook(std::move(adapter));

    std::cout << "Program finished\n";
    return 0;
}