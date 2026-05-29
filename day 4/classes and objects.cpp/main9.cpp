//class and object
#include <iostream>
#include <string>
using namespace std;

class AIML_2ndSem {
private:
    string studentName;
    string subject;

public:
    // Constructor to set name
    AIML_2ndSem(string name) {
        studentName = name;
        subject = "AIML 2nd Semester";
    }

    void displayInfo() {
        cout << "Student Name: " << studentName << endl;
        cout << "Class: " << subject << endl;
    }
};

int main() {
    string yourName;
    
    cout << "Enter your name: ";
    getline(cin, yourName); // reads full name with spaces
    
    // Create object with your name
    AIML_2ndSem student(yourName);
    
    student.displayInfo();

    return 0;
}