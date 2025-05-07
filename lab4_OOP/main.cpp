#include <iostream>
#include "func.h"

int main()
{
    system("chcp 65001 > nul");
    CustomGuitar *my_instrument = new CustomGuitar("Stratocaster", "Майку Шиноді", "біла");
    delete my_instrument;
    Drum *my_drum = new CustomDrum("Колін Бріттен", "червоний");
    delete my_drum;
    Voice *my_voice = new CustomVoice("Честер Беннінгтон");
    delete my_voice;
    return 0;
}