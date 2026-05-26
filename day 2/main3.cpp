//advanced version

#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string brand;
    string color;
    int year;
    bool engineRunning;

public:
    // Constructor
    Car(string b, string c, int y)
    {
        brand = b;
        color = c;
        year = y;
        engineRunning = false;
    }

    // Function to start engine
    void startEngine()
    {
        if (!engineRunning)
        {
            engineRunning = true;
            cout << brand << " engine started successfully.\n";
        }
        else
        {
            cout << brand << " engine is already running.\n";
        }
    }

    // Function to stop engine
    void stopEngine()
    {
        if (engineRunning)
        {
            engineRunning = false;
            cout << brand << " engine stopped.\n";
        }
        else
        {
            cout << brand << " engine is already OFF.\n";
        }
    }

    // Display car details
    void displayDetails()
    {
        cout << "\n===== Car Details =====\n";
        cout << "Brand : " << brand << endl;
        cout << "Color : " << color << endl;
        cout << "Year  : " << year << endl;
        cout << "Engine Status : "
             << (engineRunning ? "Running" : "Stopped") << endl;
    }

    // Setter functions
    void setColor(string c)
    {
        color = c;
    }

    // Getter functions
    string getBrand()
    {
        return brand;
    }

    string getColor()
    {
        return color;
    }

    int getYear()
    {
        return year;
    }
};

int main()
{
    // Creating objects using constructor
    Car myCar("BMW", "Red", 2023);
    Car friendsCar("Tesla", "Blue", 2024);

    // Display details
    myCar.displayDetails();
    friendsCar.displayDetails();

    // Start engines
    myCar.startEngine();
    friendsCar.startEngine();

    // Change color
    myCar.setColor("Black");

    // Display updated details
    myCar.displayDetails();

    // Stop engine
    myCar.stopEngine();

    return 0;
}