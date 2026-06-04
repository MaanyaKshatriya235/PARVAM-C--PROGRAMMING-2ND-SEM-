//Smart College Event Management System
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Base Class
class User
{
protected:
    string name;

public:
    User(string n)
    {
        name = n;
    }

    virtual void displayRole()
    {
        cout << "User: " << name << endl;
    }
};

// Derived Class 1
class Admin : public User
{
public:
    Admin(string n) : User(n) {}

    void displayRole()
    {
        cout << "Admin: " << name << endl;
    }
};

// Derived Class 2
class Coordinator : public User
{
public:
    Coordinator(string n) : User(n) {}

    void displayRole()
    {
        cout << "Coordinator: " << name << endl;
    }
};

// Derived Class 3
class Participant : public User
{
public:
    Participant(string n) : User(n) {}

    void displayRole()
    {
        cout << "Participant: " << name << endl;
    }
};

// Event Class
class Event
{
public:
    string eventName;
    string date;

    Event(string e, string d)
    {
        eventName = e;
        date = d;
    }

    void display()
    {
        cout << "Event: " << eventName
             << " | Date: " << date << endl;
    }
};

int main()
{
    vector<Event> events;

    int n;

    cout << "Enter number of events: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string name, date;

        cout << "\nEnter Event Name: ";
        cin >> name;

        cout << "Enter Date: ";
        cin >> date;

        events.push_back(Event(name, date));
    }

    cout << "\n----- EVENT LIST -----\n";

    for(int i = 0; i < events.size(); i++)
    {
        events[i].display();
    }

    // File Handling
    ofstream file("events.txt");

    for(int i = 0; i < events.size(); i++)
    {
        file << events[i].eventName
             << " "
             << events[i].date
             << endl;
    }

    file.close();

    cout << "\nEvent details saved to file.\n";

    // Demonstrating Inheritance
    Admin a("Harini B S");
    Coordinator c("Maanya R");
    Participant p1("Dheeksha");
    Participant p2("Namitha R");

    cout << "\n----- USER ROLES -----\n";

    a.displayRole();
    c.displayRole();
    p1.displayRole();
    p2.displayRole();
    
    return 0;
}