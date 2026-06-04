//iterators
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<string> names = {"Rahul", "Amit", "Riya"};

    list<string>::iterator it;

    for(it = names.begin(); it != names.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}