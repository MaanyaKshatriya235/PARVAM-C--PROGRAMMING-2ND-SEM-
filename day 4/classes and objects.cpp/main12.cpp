//strings
#include <iostream>
#include<string>
using namespace std;
class AIML_2ndSEM
{
    private:
    string studentname;
    string subject;

    public:
    //constructor to set name
        AIML_2ndSEM(string name)
    {
        studentname = name;
        subject = "AIML 2nd semester";
    }
    void displayInfo()
    {
        cout << "Student Name: " << studentname << endl;
        cout << "class: " << subject << endl;
    }
};
int main()
{
    string yourname;
    cout << "Enter your name: ";
    getline(cin, yourname); 
    // reads full name with spaces

    //create object with your name
    AIML_2ndSEM student(yourname);
    student.displayInfo();
    return 0;

}