//parameterized constructor
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Parameterized constructor - takes values
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Parameterized constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Pass values while creating object
    Student s1("AMMU", 101); 
    Student s2("AYRA", 102);

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}