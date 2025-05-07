#include <iostream>
#include "func.h"

int Instrument::SetBody(std::string body_type)
{
    body = body_type;
    return 1;
}

int Instrument::SetStrings(int number_of_strings)
{
    strings = number_of_strings;
    return 1;
}

int Instrument::SetSound(std::string instrument_sound)
{
    sound = instrument_sound;
    return 1;
}

int Instrument::Play()
{
    std::cout << "Дзинь...";
    return 1;
}


int Instrument::DescribeInstrument()
{
    std::cout << "Оснащений " << strings << " струнами та " << body << ". \n Звучить " << sound << " звуком: ";
    return 1;
}

int Voice::SetInstrument( std::string singer_instrument) {
    instrument = singer_instrument;
    return 1;
}
int Voice::DescribeVoice(){
    std::cout << "Оснащенний " << instrument << " в руках.   \n Звучить текст пісні: ";
    return 1;
}

Guitar::Guitar()
{
    int e = SetStrings(6);
    e = SetBody("дерев'яним корпусом");
    e = SetSound("яскравим");
    e = DescribeInstrument();
    e = Play();
}

int Guitar::Play()
{
    std::cout << "Бринь... Аккорд!";
    return 1;
}

Voice::Voice() {
    int e = SetInstrument("мікрофоном");
    e = SetSound("прекрасним");
    e = DescribeVoice();
    e = Play();
}

int Voice::Play()
{
    std::cout << "In the end";
    return 1;
}

Drum::Drum()
{
    int e = SetStrings(0);
    e = SetBody("круглим корпусом");
    e = SetSound("гучним");
    e = DescribeInstrument();
    e = Play();
}

int Drum::Play()
{
    std::cout << "Бум... Тррр-бум!";
    return 1;
}
int CustomVoice::SetName(std::string singer_name) {
    name = singer_name;
    return 1;
}


int CustomDrum::SetName(std::string drum_name)
{
    name = drum_name;
    return 1;
}

int CustomDrum::SetColour(std::string drum_color)
{
    colour = drum_color;
    return 1;
}

int ElectricGuitar::SetModel(std::string guitar_model)
{
    model = guitar_model;
    return 1;
}

ElectricGuitar::ElectricGuitar(std::string guitar_model)
{
    int e = SetModel(guitar_model);
    std::cout << "\n Модель гітари: " << model;
}

ElectricGuitar::ElectricGuitar()
{
}

int CustomGuitar::SetName(std::string guitar_name)
{
    name = guitar_name;
    return 1;
}

int CustomGuitar::SetColour(std::string color)
{
    colour = color;
    return 1;
}

CustomGuitar::CustomGuitar(std::string guitar_model, std::string guitar_name, std::string color)
{
    int e = SetModel(guitar_model);
    e = SetColour(color);
    e = SetName(guitar_name);
    std::cout << "\n Це " << colour << " гітара моделі " << model << ", яка належить: " << name << ".\n\n";
}
CustomDrum::CustomDrum(std::string drum_name, std::string drum_colour) {
    int e= SetColour(drum_colour);
    e = SetName(drum_name);
    std::cout << "\n Це " << colour << " музичний інструмент нашого барабанщика на ім'я: " << name << ".\n\n";
}

CustomVoice::CustomVoice(std::string singer_name) {
    int e = SetName(singer_name);
    std::cout << "\n Це " << name << " знову віддає всі свої сили на ідеальний звук на концерті.\n\n";
}

