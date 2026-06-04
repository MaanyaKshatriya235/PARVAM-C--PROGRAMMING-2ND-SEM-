//vehicle management system
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string brand;   // Private member

protected:
    int speed;      // Protected member

public:
    // Constructor
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }

    // Public getter
    string getBrand() {
        return brand;
    }

    int getSpeed() {
        return speed;
    }
};

// Derived class
class Car : public Vehicle {
public:
    Car(string b, int s) : Vehicle(b, s) {}

    void accelerate(int increase) {
        speed += increase;   // Accessing protected member
    }

    void displaySpeed() {
        cout << "Current Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car("Toyota", 60);

    cout << "Brand: " << car.getBrand() << endl;
    cout << "Initial Speed: " << car.getSpeed() << " km/h" << endl;

    car.accelerate(20);

    cout << "\nAfter Acceleration:" << endl;
    car.displaySpeed();

    return 0;
}