//abstact class
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;
};
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};
int main() {
    Circle circle;
    Square square;

    circle.draw();
    square.draw();

    return 0;
}
