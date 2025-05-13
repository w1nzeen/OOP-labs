#pragma once
#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")
using namespace std;

class Instrument {
private:
    string sound_type;
    string cost;
    void create();
    void dismantle();
public:
    Instrument();
    ~Instrument();
};

class StringInstrument : virtual public Instrument {
private:
    int strings;
    string complexity;
    string cost;
public:
    StringInstrument();
    ~StringInstrument();
};

class WindInstrument : virtual public Instrument {
private:
    string mouthpiece;
    string complexity;
    string cost;
public:
    WindInstrument();
    ~WindInstrument();
};

class PercussionInstrument : virtual public Instrument {
private:
    string surface;
    string complexity;
    string cost;
public:
    PercussionInstrument();
    ~PercussionInstrument();
};

class HybridInstrument : public StringInstrument, public PercussionInstrument {
public:
    HybridInstrument();
    ~HybridInstrument();
};

class MultiInstrument : public StringInstrument, public WindInstrument, public PercussionInstrument {
public:
    MultiInstrument();
    ~MultiInstrument();
};