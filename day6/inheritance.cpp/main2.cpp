//Menu System using Inheritance 
#include <iostream>
using namespace std;

// Base Class
class Menu {
public:
    virtual void displayMenu() {
        cout << "Restaurant Menu" << endl;
    }

    virtual ~Menu() {}
};

// Derived Class - Veg Menu
class VegMenu : public Menu {
public:
    void displayMenu() override {
        cout << "\n--- Veg Menu ---" << endl;
        cout << "1. Paneer Butter Masala" << endl;
        cout << "2. Veg Biryani" << endl;
        cout << "3. Dal Tadka" << endl;
        cout << "4. Palak Paneer" << endl;
    }
};

// Derived Class - Non-Veg Menu
class NonVegMenu : public Menu {
public:
    void displayMenu() override {
        cout << "\n--- Non-Veg Menu ---" << endl;
        cout << "1. Chicken Biryani" << endl;
        cout << "2. Butter Chicken" << endl;
        cout << "3. Fish Curry" << endl;
        cout << "4. Mutton Korma" << endl;
    }
};

// Derived Class - Chinese Menu
class ChineseMenu : public Menu {
public:
    void displayMenu() override {
        cout << "\n--- Chinese Menu ---" << endl;
        cout << "1. Hakka Noodles" << endl;
        cout << "2. Fried Rice" << endl;
        cout << "3. Manchurian" << endl;
        cout << "4. Spring Rolls" << endl;
    }
};

int main() {
    int choice;
    Menu *menu;

    cout << "===== Restaurant Menu System =====" << endl;
    cout << "1. Veg Menu" << endl;
    cout << "2. Non-Veg Menu" << endl;
    cout << "3. Chinese Menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            menu = new VegMenu();
            break;
        case 2:
            menu = new NonVegMenu();
            break;
        case 3:
            menu = new ChineseMenu();
            break;
        default:
            cout << "Invalid Choice!" << endl;
            return 0;
    }

    menu->displayMenu();

    delete menu;
    return 0;
}