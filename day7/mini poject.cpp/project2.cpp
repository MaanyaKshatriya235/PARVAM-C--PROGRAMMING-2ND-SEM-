//Smart College Event Management System(using all concepts)
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <fstream>

using namespace std;

// ---------------- TEMPLATE ----------------
template <class T>
class Record
{
public:
    T data;

    Record(T d)
    {
        data = d;
    }

    void show()
    {
        cout << data << endl;
    }
};

// ---------------- EVENT ----------------
class Event
{
public:
    int id;
    string name;

    Event(int i = 0, string n = "")
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id
             << "  Event: " << name << endl;
    }
};

// ---------------- ABSTRACTION ----------------
class EventManager
{
private:
    vector<Event> events;

public:

    // STACK
    stack<Event> history;

    // CREATE
    void addEvent(int id, string name)
    {
        Event e(id, name);

        events.push_back(e);

        cout << "Event Added Successfully\n";
    }

    // READ
    void viewEvents()
    {
        if(events.empty())
        {
            cout << "No Events Available\n";
            return;
        }

        cout << "\nEvent List\n";

        // ITERATOR
        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            it->display();
        }
    }

    // UPDATE
    void updateEvent(int id, string newName)
    {
        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            if(it->id == id)
            {
                history.push(*it);

                it->name = newName;

                cout << "Updated Successfully\n";
                return;
            }
        }

        throw "Event Not Found";
    }

    // DELETE
    void deleteEvent(int id)
    {
        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            if(it->id == id)
            {
                history.push(*it);

                events.erase(it);

                cout << "Deleted Successfully\n";
                return;
            }
        }

        throw "Event Not Found";
    }

    // UNDO USING STACK
    void undo()
    {
        if(history.empty())
        {
            cout << "Nothing To Undo\n";
            return;
        }

        Event old = history.top();
        history.pop();

        events.push_back(old);

        cout << "Undo Completed\n";
    }

    // FILE STORAGE
    void saveToFile()
    {
        ofstream fout("events.txt");

        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            fout << it->id << " "
                 << it->name << endl;
        }

        fout.close();

        cout << "Saved To File\n";
    }
};

// ---------------- INHERITANCE ----------------

class User
{
public:
    string name;

    User(string n)
    {
        name = n;
    }

    virtual void role()
    {
        cout << "User\n";
    }
};

class Admin : public User
{
public:
    Admin(string n) : User(n) {}

    void role()
    {
        cout << "Admin Panel\n";
    }
};

class Coordinator : public User
{
public:
    Coordinator(string n) : User(n) {}

    void role()
    {
        cout << "Coordinator Panel\n";
    }
};

// ---------------- MAIN ----------------

int main()
{
    EventManager manager;

    // POLYMORPHISM
    User *u1 = new Admin("Ramesh");
    User *u2 = new Coordinator("Priya");

    u1->role();
    u2->role();

    // CRUD
    manager.addEvent(1,"Hackathon");
    manager.addEvent(2,"Workshop");

    manager.viewEvents();

    // EXCEPTION HANDLING
    try
    {
        manager.updateEvent(1,"TechFest");
    }
    catch(const char *msg)
    {
        cout << msg << endl;
    }

    manager.viewEvents();

    // LIST
    list<string> volunteerTasks;

    volunteerTasks.push_back("Registration Desk");
    volunteerTasks.push_back("Stage Setup");
    volunteerTasks.push_back("Photography");

    cout << "\nVolunteer Tasks\n";

    for(auto task : volunteerTasks)
    {
        cout << task << endl;
    }

    // QUEUE
    queue<string> registrationQueue;

    registrationQueue.push("Rahul");
    registrationQueue.push("Ananya");
    registrationQueue.push("Kiran");

    cout << "\nRegistration Queue\n";

    while(!registrationQueue.empty())
    {
        cout << registrationQueue.front() << endl;
        registrationQueue.pop();
    }

    // TEMPLATE
    Record<string> certificate("Participation Certificate");

    cout << "\nTemplate Output\n";
    certificate.show();

    // FILE STORAGE
    manager.saveToFile();

    // STACK UNDO
    manager.deleteEvent(2);

    manager.undo();

    cout << "\nAfter Undo\n";

    manager.viewEvents();

    delete u1;
    delete u2;

    return 0;
}