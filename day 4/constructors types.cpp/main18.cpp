//all types
#include<iostream>
using namespace std;

class Student {

public:

    string name;
    int age;
    string college;

    // 1. Default Constructor
    Student() {
        name = "Not Given";
        age = 0;
        college = "Not Given";

        cout << "Default Constructor Called" << endl;
    }

    // 2. Constructor with 1 parameter
    Student(string n) {
        name = n;
        age = 0;
        college = "Not Given";

        cout << "Constructor with 1 parameter Called" << endl;
    }

    // 3. Constructor with 2 parameters
    Student(string n, int a) {
        name = n;
        age = a;
        college = "Not Given";

        cout << "Constructor with 2 parameters Called" << endl;
    }

    // 4. Constructor with 3 parameters
    Student(string n, int a, string c) {
        name = n;
        age = a;
        college = c;

        cout << "Constructor with 3 parameters Called" << endl;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "College : " << college << endl;
    }
};

int main() {

    Student s1;                         // default constructor
    s1.display();

    Student s2("Harshith");            // 1 parameter
    s2.display();

    Student s3("Rahul", 20);           // 2 parameters
    s3.display();

    Student s4("Kiran", 21, "CEC");    // 3 parameters
    s4.display();

    return 0;
}