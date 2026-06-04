#include <iostream>
using namespace std;

// Parent Class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Child Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();

    return 0;
}