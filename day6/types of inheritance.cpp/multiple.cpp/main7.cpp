#include <iostream>
using namespace std;

// Parent Class 1
class Father {
public:
    void showFather() {
        cout << "This is Father" << endl;
    }
};

// Parent Class 2
class Mother {
public:
    void showMother() {
        cout << "This is Mother" << endl;
    }
};

// Child Class
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is Child" << endl;
    }
};

int main() {
    Child c;

    c.showFather();
    c.showMother();
    c.showChild();

    return 0;
}