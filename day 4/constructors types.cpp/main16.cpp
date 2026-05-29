//Copy Constructor
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // 1. Parameterized constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Parameterized constructor called" << endl;
    }

    // 2. Copy constructor - takes reference of same class object
    Student(const Student &obj) {
        name = obj.name;
        rollNo = obj.rollNo;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1("AKSHARA", 25);     // Calls parameterized constructor
    Student s2 = s1;            // Calls copy constructor
    Student s3(s1);             // Also calls copy constructor

    cout << "\nOriginal object: ";
    s1.display();
    
    cout << "Copied object s2: ";
    s2.display();
    
    cout << "Copied object s3: ";
    s3.display();

    return 0;
}