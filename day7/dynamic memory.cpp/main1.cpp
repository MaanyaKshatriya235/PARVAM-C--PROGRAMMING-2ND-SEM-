//Allocate Memory for One Integer
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;   // Allocate memory

    *ptr = 50;            // Store value

    cout << "Value = " << *ptr << endl;

    delete ptr;           // Free memory

    return 0;
}
