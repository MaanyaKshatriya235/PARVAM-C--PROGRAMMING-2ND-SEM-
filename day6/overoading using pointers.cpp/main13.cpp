//virtual annd pure functions
#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void play() {
        cout << "Playing Instrument" << endl;
    }
};

class Guitar : public Instrument {
public:
    void play() override {
        cout << "Playing Guitar Sound" << endl;
    }
};

class Piano : public Instrument {
public:
    void play() override {
        cout << "Playing Piano Sound" << endl;
    }
};

class Flute : public Instrument {
public:
    void play() override {
        cout << "Playing Flute sound" << endl;
    }
};

int main() {

    Instrument *ptr;

    Guitar g;
    Piano p;
    Flute f;
    ptr = &g;
    ptr->play();

    ptr = &p;
    ptr->play();

    ptr = &f;
    ptr->play();

    return 0;
}