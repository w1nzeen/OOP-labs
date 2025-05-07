#include <iostream>
#include "func.h"
using namespace std;
int main()
{
    system("chcp 65001 > nul");
    CustomGuitar* my_instrument = new CustomGuitar("Stratocaster", "Майку Шиноді", "біла");
    cout << "Звучить гітара: " << my_instrument->Play() << endl;
    delete my_instrument;
    Drum *my_drum = new CustomDrum("Колін Бріттен", "червоний");
    cout << "Звучить барабан: " << my_drum->Play() << endl;
    delete my_drum;
    Voice *my_voice = new CustomVoice("Честер Беннінгтон");
    cout << "Співає пісню: " << my_voice->Play() << endl;
    delete my_voice;
    return 0;
}