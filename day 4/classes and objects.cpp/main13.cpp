//single object of a class
#include<iostream>
using namespace std;

class Student {

public:

    // Arrays to store details
    string name[4];
    string fatherName[4];
    string motherName[4];
    string nativePlace[4];
    string school[4];

    // Function to enter details
    void getData() {

        for(int i = 0; i < 4; i++) {

            cout << "\nEnter Details of Student " << i + 1 << endl;

            cout << "Enter Name: ";
            cin >> name[i];

            cout << "Enter Father Name: ";
            cin >> fatherName[i];

            cout << "Enter Mother Name: ";
            cin >> motherName[i];

            cout << "Enter Native Place: ";
            cin >> nativePlace[i];

            cout << "Enter School: ";
            cin >> school[i];
        }
    }

    // Display all names
    void displayNames() {

        cout << "\nStudent Names:\n";

        for(int i = 0; i < 4; i++) {
            cout << name[i] << endl;
        }
    }

    // Display all father names
    void displayFatherNames() {

        cout << "\nFather Names:\n";

        for(int i = 0; i < 4; i++) {
            cout << fatherName[i] << endl;
        }
    }

    // Display all mother names
    void displayMotherNames() {

        cout << "\nMother Names:\n";

        for(int i = 0; i < 4; i++) {
            cout << motherName[i] << endl;
        }
    }

    // Display all native places
    void displayNativePlaces() {

        cout << "\nNative Places:\n";

        for(int i = 0; i < 4; i++) {
            cout << nativePlace[i] << endl;
        }
    }

    // Display all schools
    void displaySchools() {

        cout << "\nSchools:\n";

        for(int i = 0; i < 4; i++) {
            cout << school[i] << endl;
        }
    }

    // Display all full details
    void displayAllDetails() {

        for(int i = 0; i < 4; i++) {

            cout << "\nStudent " << i + 1 << " Details\n";

            cout << "Name          : " << name[i] << endl;
            cout << "Father Name   : " << fatherName[i] << endl;
            cout << "Mother Name   : " << motherName[i] << endl;
            cout << "Native Place  : " << nativePlace[i] << endl;
            cout << "School        : " << school[i] << endl;
        }
    }
};

int main() {

    Student s;

    int choice;

    // Enter details
    s.getData();

    cout << "\n===== MENU =====" << endl;
    cout << "1. Display All Names" << endl;
    cout << "2. Display All Father Names" << endl;
    cout << "3. Display All Mother Names" << endl;
    cout << "4. Display All Native Places" << endl;
    cout << "5. Display All Schools" << endl;
    cout << "6. Display Full Details" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            s.displayNames();
            break;

        case 2:
            s.displayFatherNames();
            break;

        case 3:
            s.displayMotherNames();
            break;

        case 4:
            s.displayNativePlaces();
            break;

        case 5:
            s.displaySchools();
            break;

        case 6:
            s.displayAllDetails();
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
