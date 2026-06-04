//Array of Objects Using Pointers
#include <iostream>
using namespace std;

class Book
{
public:
    string title;

    void getData()
    {
        cin >> title;
    }

    void display()
    {
        cout << "Book: " << title << endl;
    }
};

int main()
{
    Book *b = new Book[3];   // Array of 3 objects

    cout << "Enter 3 book names:" << endl;

    for(int i = 0; i < 3; i++)
    {
        b[i].getData();
    }

    cout << "\nBook Details:" << endl;

    for(int i = 0; i < 3; i++)
    {
        b[i].display();
    }

    delete[] b;    // Delete array of objects

    return 0;
}