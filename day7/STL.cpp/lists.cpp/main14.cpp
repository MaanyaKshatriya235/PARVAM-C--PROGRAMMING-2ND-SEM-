//container
//List library 
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Insert elements
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);

    cout << "List elements: ";
    for (int x : l) {
        cout << x << " ";
    }

    // Remove elements
    l.pop_front();
    l.pop_back();

    cout << "\nAfter deletion: ";
    for (int x : l) {
        cout << x << " ";
    }

    return 0;
}