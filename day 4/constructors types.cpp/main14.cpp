//CONSTRUCTOR
//DEFAULT CONSTRUCTOR'
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Default constructor - no parameters
    Student() {
        name = "Unknown";
        rollNo = 0;
        cout << "Default constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Object created - default constructor runs automatically
    Student s1; 
    
    s1.display();

    return 0;
}