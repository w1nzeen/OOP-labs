#include "func.h"

int Character::SetCharacteristic(std::string characteristic_type) {
    characteristic = characteristic_type;
    return 1;
}

int Character::SetPts(int number_of_pts) {
    pts = number_of_pts;
    return 1;
}

int Character::SetDifficulty(std::string character_dificulty) {
    difficulty = character_dificulty;
    return 1;
}

int Character::CreateCharacter() {
    std::cout << " Персонаж який входить до класу: " << characteristic << " та має складність в " << " потребує щонайменше " << pts << " рейтингу, щоб добре грати на ньому" << std::endl;
    return 1;
}

Strength::Strength() {
    SetCharacteristic("Axe taunts nearby enemy units, forcing them to attack him, while he gains bonus armor during the duration.");
    SetPts(2000);
    SetDifficulty("3");
    CreateCharacter();
    Say();
}

int Strength::Say() {
    std::cout << "грізно гарчить, розрубуючи противника" << std::endl;
    return 1;
}

Agility::Agility() {
    SetCharacteristic("Burns an opponent's mana on each attack and deals damage equal to a percentage of the mana burnt. Enemies with no mana left are temporarily slowed.");
    SetPts(2400);
    SetDifficulty("3");
    CreateCharacter();
    Say();
}

int Agility::Say() {
    std::cout << "Знову сміється, вбиваючи ще одного мага" << std::endl;
    return 1;
}

Inteligence::Inteligence() {
    SetCharacteristic("Muerta fires a ghostly trickshot at an enemy unit or tree. When the bullet strikes, it damages and briefly slows, then ricochets in the targeted direction.");
    SetPts(1800);
    SetDifficulty("3");
    CreateCharacter();
    Say();
}

int Inteligence::Say() {
    std::cout << "Знову в соло розносить всіх і вся" << std::endl;
    return 1;
}

Universal::Universal() {
    SetCharacteristic("Tethers Io to an allied unit, granting bonus movement speed to both. When Io restores health or mana, the tethered unit gains a portion of that amount. The tether breaks when the allied unit moves too far away, or Io cancels the tether. Tether briefly slows enemies touching it.");
    SetPts(4800);
    SetDifficulty("3");
    CreateCharacter();
    Say();
}

int Universal::Say() {
    std::cout << "*Звуки радості*" << std::endl;
    return 1;
}
int BestHeros::SetHero(std::string hero_type) {
    type = hero_type;
    return 1;
}

BestHeros::BestHeros(std::string hero_type) {
    SetHero(hero_type);
    std::cout << "\nГерой типу: " << type;
}

BestHeros::BestHeros() {}

int PopularHero::SetName(std::string character_name) {
    name = character_name;
    return 1;
}

int PopularHero::SetDescription(std::string description) {
    descr = description;
    return 1;
}

PopularHero::PopularHero(std::string hero_type, std::string character_name, std::string description) {
    SetHero(type);
    SetDescription(description);
    SetName(character_name);
    std::cout << "Герой на ім'я: " << name << " з таким описом: " << description << " належить до типу:" << hero_type << std::endl;
}
int PopularHero::Say() {
    std::cout << "I am a popular hero, ready for battle!" << std::endl;
    return 1;
}