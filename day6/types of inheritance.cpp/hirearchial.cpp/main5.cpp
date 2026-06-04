//
#include <iostream>
using namespace std;

// Parent Class
class Parent {
public:
    void familyName() {
        cout << "Family Name: Kshatriya" << endl;
    }
};

// Child Class 1
class Son : public Parent {
public:
    void showSon() {
        cout << "I am the Son." << endl;
    }
};

// Child Class 2
class Daughter : public Parent {
public:
    void showDaughter() {
        cout << "I am the Daughter." << endl;
    }
};

// Child Class 3
class YoungestChild : public Parent {
public:
    void showYoungest() {
        cout << "I am the Youngest Child." << endl;
    }
};

int main() {
    Son s;
    Daughter d;
    YoungestChild y;

    cout << "Son Details:" << endl;
    s.familyName();
    s.showSon();

    cout << "\nDaughter Details:" << endl;
    d.familyName();
    d.showDaughter();

    cout << "\nYoungest Child Details:" << endl;
    y.familyName();
    y.showYoungest();

    return 0;
}