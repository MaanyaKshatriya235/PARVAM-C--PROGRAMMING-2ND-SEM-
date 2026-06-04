//event management system
#include <iostream>
using namespace std;

// Base Class
class Event
{
protected:
    string eventName;
    string venue;

public:
    void setEventDetails(string name, string place)
    {
        eventName = name;
        venue = place;
    }

    void showEventDetails()
    {
        cout << "Event Name : " << eventName << endl;
        cout << "Venue      : " << venue << endl;
    }
};

// Derived Class 1
class WeddingEvent : public Event
{
public:
    void showWedding()
    {
        cout << "Event Type : Wedding Event" << endl;
    }
};

// Derived Class 2
class CorporateEvent : public Event
{
public:
    void showCorporate()
    {
        cout << "Event Type : Corporate Event" << endl;
    }
};

// Derived Class 3
class BirthdayEvent : public Event
{
public:
    void showBirthday()
    {
        cout << "Event Type : Birthday Event" << endl;
    }
};

int main()
{
    WeddingEvent wedding;
    wedding.setEventDetails("Nammi weds Purvick Reddy Wedding", "Royal Palace");
    wedding.showWedding();
    wedding.showEventDetails();

    cout << "\n-------------------\n";

    CorporateEvent corporate;
    corporate.setEventDetails("Tech Conference 2026", "Convention Center");
    corporate.showCorporate();
    corporate.showEventDetails();

    cout << "\n-------------------\n";

    BirthdayEvent birthday;
    birthday.setEventDetails("Ayra's Birthday", "Party Hall");
    birthday.showBirthday();
    birthday.showEventDetails();

    return 0;
}
