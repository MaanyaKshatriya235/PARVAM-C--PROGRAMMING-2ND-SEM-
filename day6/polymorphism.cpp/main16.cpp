//polymorphism using pointers
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog:Barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat : Meow!" << endl;
    }
};

int main() {
    Animal *ptr1 = new Dog();
    Animal *ptr2 = new Cat();

    ptr1->makeSound();
    ptr2->makeSound();

    delete ptr1;
    delete ptr2;

    return 0;
}