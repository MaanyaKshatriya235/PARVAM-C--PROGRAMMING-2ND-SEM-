//
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <fstream>

using namespace std;

//--------------------- USER CLASSES ---------------------

class User
{
public:
    virtual void showPanel()
    {
        cout << "User Panel\n";
    }

    virtual ~User() {}
};

class Admin : public User
{
public:
    void showPanel()
    {
        cout << "\n===== ADMIN PANEL =====\n";
    }
};

class Coordinator : public User
{
public:
    void showPanel()
    {
        cout << "\n===== COORDINATOR PANEL =====\n";
    }
};

class Participant : public User
{
public:
    void showPanel()
    {
        cout << "\n===== PARTICIPANT PANEL =====\n";
    }
};

//--------------------- TEMPLATE ---------------------

template <class T>
class Record
{
public:
    T value;

    Record(T v)
    {
        value = v;
    }

    void display()
    {
        cout << value << endl;
    }
};

//--------------------- EVENT ---------------------

class Event
{
public:
    int id;
    string name;
    string date;

    Event()
    {
        id = 0;
    }

    Event(int i, string n, string d)
    {
        id = i;
        name = n;
        date = d;
    }

    void display()
    {
        cout << "ID: " << id
             << " | Event: " << name
             << " | Date: " << date << endl;
    }
};

//--------------------- EVENT MANAGER ---------------------

class EventManager
{
private:
    vector<Event> events;

public:

    stack<Event> undoStack;

    // CREATE
    void addEvent()
    {
        int id;
        string name;
        string date;

        cout << "Enter Event ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Event Name: ";
        getline(cin, name);

        cout << "Enter Event Date: ";
        getline(cin, date);

        events.push_back(Event(id, name, date));

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

        cout << "\n----- EVENT LIST -----\n";

        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            it->display();
        }
    }

    // UPDATE
    void updateEvent()
    {
        int id;
        cout << "Enter Event ID To Update: ";
        cin >> id;

        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            if(it->id == id)
            {
                undoStack.push(*it);

                cin.ignore();

                cout << "Enter New Event Name: ";
                getline(cin, it->name);

                cout << "Enter New Date: ";
                getline(cin, it->date);

                cout << "Updated Successfully\n";
                return;
            }
        }

        throw "Event Not Found";
    }

    // DELETE
    void deleteEvent()
    {
        int id;

        cout << "Enter Event ID To Delete: ";
        cin >> id;

        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            if(it->id == id)
            {
                undoStack.push(*it);

                events.erase(it);

                cout << "Deleted Successfully\n";
                return;
            }
        }

        throw "Event Not Found";
    }

    // STACK
    void undo()
    {
        if(undoStack.empty())
        {
            cout << "Nothing To Undo\n";
            return;
        }

        Event e = undoStack.top();

        undoStack.pop();

        events.push_back(e);

        cout << "Undo Successful\n";
    }

    // FILE HANDLING
    void saveFile()
    {
        ofstream fout("events.txt");

        for(auto it = events.begin();
            it != events.end();
            ++it)
        {
            fout << it->id << ","
                 << it->name << ","
                 << it->date << endl;
        }

        fout.close();

        cout << "Data Saved To File\n";
    }
};

//--------------------- MAIN ---------------------

int main()
{
    EventManager manager;

    list<string> volunteerTasks;
    queue<string> registrations;

    int choice;

    do
    {
        cout << "\n========== SMART COLLEGE EVENT MANAGEMENT ==========\n";

        cout << "1. Admin Panel\n";
        cout << "2. Coordinator Panel\n";
        cout << "3. Participant Panel\n";
        cout << "4. Save Events To File\n";
        cout << "5. Template Demo\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            User *u = new Admin();
            u->showPanel();

            int adminChoice;

            cout << "\n1.Add Event\n";
            cout << "2.View Events\n";
            cout << "3.Update Event\n";
            cout << "4.Delete Event\n";
            cout << "5.Undo\n";

            cout << "Enter Choice: ";
            cin >> adminChoice;

            try
            {
                switch(adminChoice)
                {
                case 1:
                    manager.addEvent();
                    break;

                case 2:
                    manager.viewEvents();
                    break;

                case 3:
                    manager.updateEvent();
                    break;

                case 4:
                    manager.deleteEvent();
                    break;

                case 5:
                    manager.undo();
                    break;
                }
            }
            catch(const char *msg)
            {
                cout << "Exception: " << msg << endl;
            }

            delete u;
            break;
        }

        case 2:
        {
            User *u = new Coordinator();
            u->showPanel();

            int ch;

            cout << "1.Add Volunteer Task\n";
            cout << "2.View Tasks\n";

            cout << "Enter Choice: ";
            cin >> ch;

            if(ch == 1)
            {
                string task;

                cin.ignore();

                cout << "Enter Task: ";
                getline(cin, task);

                volunteerTasks.push_back(task);
            }

            else if(ch == 2)
            {
                cout << "\nVolunteer Tasks\n";

                for(auto task : volunteerTasks)
                {
                    cout << task << endl;
                }
            }

            delete u;
            break;
        }

        case 3:
        {
            User *u = new Participant();
            u->showPanel();

            int ch;

            cout << "1.Register Participant\n";
            cout << "2.View Queue\n";

            cout << "Enter Choice: ";
            cin >> ch;

            if(ch == 1)
            {
                string name;

                cin.ignore();

                cout << "Enter Participant Name: ";
                getline(cin, name);

                registrations.push(name);
            }

            else if(ch == 2)
            {
                queue<string> temp = registrations;

                cout << "\nRegistration Queue\n";

                while(!temp.empty())
                {
                    cout << temp.front() << endl;
                    temp.pop();
                }
            }

            delete u;
            break;
        }

        case 4:
            manager.saveFile();
            break;

        case 5:
        {
            string certificate;

            cin.ignore();

            cout << "Enter Certificate Name: ";
            getline(cin, certificate);

            Record<string> r(certificate);

            cout << "Template Output: ";
            r.display();

            break;
        }

        case 0:
            cout << "Program Closed\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}