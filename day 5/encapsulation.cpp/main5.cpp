//hotel management system
#include <iostream>
using namespace std;

class Menu
{
private:
    int price;

protected:
    int itemCode;

public:
    string itemName;

    void getDetails()
    {
        cout << "\nEnter Item Code: ";
        cin >> itemCode;

        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << itemCode << "\t\t"
             << itemName << "\t\tRs." << price << endl;
    }
};

class Hotel : public Menu
{
public:
    void showItem()
    {
        display();
    }
};

int main()
{
    int n;

    cout << "Enter Number of Menu Items: ";
    cin >> n;

    Hotel h[100];

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Item " << i + 1 << " ---";
        h[i].getDetails();
    }

    // Display all items
    cout << "\n\n===== HOTEL MENU =====" << endl;
    cout << "Code\t\tName\t\tPrice" << endl;
    cout << "------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        h[i].showItem();
    }

    return 0;
}