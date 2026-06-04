//Calculator
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5, 10) << endl;
    cout << add(2.5, 3.7) << endl;

    return 0;
}