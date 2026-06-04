#include <iostream>
using namespace std;

// Grandparent Class
class Grandparent {
public:
    void house() {
        cout << "Grandparent owns a house" << endl;
    }
};

// Parent Class
class Parent : public Grandparent {
public:
    void car() {
        cout << "Parent owns a car" << endl;
    }
};

// Child Class
class Child : public Parent {
public:
    void bike() {
        cout << "Child owns a bike" << endl;
    }
};

int main() {
    Child c;

    c.house();
    c.car();
    c.bike();

    return 0;
}