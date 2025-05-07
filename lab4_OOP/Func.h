#include <string>

class Instrument {
    std::string body;
    int strings;
    std::string sound;

public:
    int SetBody(std::string body_type);

    int SetStrings(int number_of_strings);

    int SetSound(std::string instrument_sound);

    int Play();

protected:
    int DescribeInstrument();
};

class Guitar : public Instrument {
public:
    Guitar();

    int Play();
};

class Voice : public Instrument {
    std::string instrument;
    std::string sound;
public:
    Voice();

    int Play();

   int SetInstrument(std::string singer_instrument);

protected:
    int DescribeVoice();
};


class CustomVoice : public Voice {
    std::string name;

public:
    int SetName(std::string singer_name);

    CustomVoice(std::string singer_name);
};


class Drum : public Instrument {
public:
    Drum();

    int Play();
};


class CustomDrum : public Drum {
    std::string name;
    std::string colour;

public:
    int SetName(std::string drum_name);

    int SetColour(std::string drum_colour);

    CustomDrum(std::string drum_name, std::string drum_colour);
};

class ElectricGuitar : public Guitar {
protected:
    std::string model;

public:
    int SetModel(std::string guitar_model);

    ElectricGuitar(std::string guitar_model);

    ElectricGuitar();
};

class CustomGuitar : public ElectricGuitar {
    std::string name;
    std::string colour;

public:
    int SetName(std::string guitar_name);

    int SetColour(std::string color);

    CustomGuitar(std::string guitar_model, std::string guitar_name, std::string color);
};
