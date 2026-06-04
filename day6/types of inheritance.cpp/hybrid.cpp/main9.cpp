#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    void showPerson() {
        cout << "I am a Person" << endl;
    }
};

// Derived Class 1
class Student : public Person {
public:
    void study() {
        cout << "Student is studying" << endl;
    }
};

// Derived Class 2
class Sports {
public:
    void play() {
        cout << "Playing Sports" << endl;
    }
};

// Hybrid Class
class SchoolStudent : public Student, public Sports {
public:
    void show() {
        cout << "School Student" << endl;
    }
};

int main() {
    SchoolStudent s;

    s.showPerson();
    s.study();
    s.play();
    s.show();

    return 0;
}