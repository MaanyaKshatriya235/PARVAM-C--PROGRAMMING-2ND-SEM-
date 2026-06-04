//Pointers and Objects
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student *s = new Student;

    s->name = "Rahul";
    s->age = 20;

    s->display();

    delete s;

    return 0;
}