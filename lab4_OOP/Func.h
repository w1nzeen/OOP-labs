#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <string>

class Character {
    std::string characteristic;
    int pts;
    std::string difficulty;

public:
    int SetCharacteristic(std::string characteristic_type);
    int SetPts(int number_of_pts);
    int SetDifficulty(std::string character_dificulty);

    virtual int Say() = 0;

protected:
    int CreateCharacter();
};

class Strength : public Character {
public:
    Strength();
    int Say() override;
};

class Agility : public Character {
public:
    Agility();
    int Say() override;
};

class Inteligence : public Character {
public:
    Inteligence();
    int Say() override;
};

class Universal : public Character {
public:
    Universal();
    int Say() override;
};

class BestHeros : public Character {
protected:
    std::string type;

public:
    int SetHero(std::string character_hero);
    BestHeros(std::string character_hero);
    BestHeros();
};

class PopularHero : public BestHeros {
    std::string name;
    std::string descr;
    int Say() override;

public:
    int SetName(std::string character_name);
    int SetDescription(std::string description);
    PopularHero(std::string hero_type, std::string character_name, std::string description);
};

#endif // FUNC_H
