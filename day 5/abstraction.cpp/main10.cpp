//getters and setters
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    // Setter
    void setName(string n) {
        name = n;
    }

    // Getter
    string getName() {
        return name;
    }
};

int main() {
    Student s;

    s.setName("Maanya");

    cout << "Student Name: " << s.getName();

    return 0;
}