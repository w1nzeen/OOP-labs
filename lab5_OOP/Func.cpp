#include "Func.h"

void Instrument::create() {
    cout << "Created: Instrument\n";
}

void Instrument::dismantle() {
    cout << "Dismantled: Everything\n";
}

Instrument::Instrument() {
    create();
}

Instrument::~Instrument() {
    dismantle();
}

StringInstrument::StringInstrument() {
    cost = "moderate";
    strings = 6;
    complexity = "medium";
    cout << "Has " << strings << " strings, " << complexity << " complexity and costs: " << cost << endl;
    cout << "That's a string instrument!\n";
}

StringInstrument::~StringInstrument() {
    cout << "Dismantled: strings, complexity, cost\n";
}

WindInstrument::WindInstrument() {
    cost = "high";
    mouthpiece = "reed";
    complexity = "high";
    cout << "Uses " << mouthpiece << " mouthpiece, " << complexity << " complexity and costs: " << cost << endl;
    cout << "That's a wind instrument!\n";
}

WindInstrument::~WindInstrument() {
    cout << "Dismantled: mouthpiece, complexity, cost\n";
}

PercussionInstrument::PercussionInstrument() {
    cost = "low";
    surface = "drumhead";
    complexity = "low";
    cout << "Has " << surface << " surface, " << complexity << " complexity and costs: " << cost << endl;
    cout << "That's a percussion instrument!\n";
}

PercussionInstrument::~PercussionInstrument() {
    cout << "Dismantled: surface, complexity, cost\n";
}

HybridInstrument::HybridInstrument() {
    cout << "A strange mix of strings and percussion!\n";
}

HybridInstrument::~HybridInstrument() {
    cout << "Dismantled the hybrid\n";
}

MultiInstrument::MultiInstrument() {
    cout << "It plays strings, blows wind, and hits percussion\n";
}

MultiInstrument::~MultiInstrument() {
    cout << "Dismantled the multi-instrument\n";
}