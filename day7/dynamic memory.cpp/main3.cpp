//. Dynamic Memory Allocation (new and delete)
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;   // Memory allocated

    *ptr = 100;

    cout << "Value = " << *ptr << endl;

    delete ptr;          // Memory released

    return 0;
}