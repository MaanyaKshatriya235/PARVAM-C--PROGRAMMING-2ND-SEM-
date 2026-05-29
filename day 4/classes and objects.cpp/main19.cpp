//student details using classes and objects
#include<iostream>
using namespace std;

class Student {

public:
    string name;
    string fatherName;

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Father Name : " << fatherName << endl;
    }
};

int main() {

    Student *obj = nullptr;
    int choice;

    while(true) {

        cout << "\n===== MENU =====" << endl;
        cout << "1. Insert Object" << endl;
        cout << "2. Display Object" << endl;
        cout << "3. Delete Object" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            if(obj != nullptr) {
                cout << "Object already exists. Replacing it..." << endl;
                delete obj;
            }

            obj = new Student();

            cout << "Enter Name: ";
            cin >> obj->name;

            cout << "Enter Father Name: ";
            cin >> obj->fatherName;

            cout << "Object Inserted Successfully!" << endl;
        }

        else if(choice == 2) {

            if(obj == nullptr) {
                cout << "No object exists to display!" << endl;
            }
            else {
                obj->display();
            }
        }

        else if(choice == 3) {

            if(obj == nullptr) {
                cout << "No object to delete!" << endl;
            }
            else {
                delete obj;
                obj = nullptr;
                cout << "Object Deleted Successfully!" << endl;
            }
        }

        else if(choice == 4) {
            cout << "Exiting program..." << endl;
            break;
        }

        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}