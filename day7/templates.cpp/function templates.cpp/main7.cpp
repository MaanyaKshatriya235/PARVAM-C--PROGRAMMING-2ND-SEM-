//Find the Larger Value
#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Maximum of 10 and 20 = "
         << findMax(10, 20) << endl;

    cout << "Maximum of 5.6 and 3.2 = "
         << findMax(5.6, 3.2) << endl;

    cout << "Maximum of A and Z = "
         << findMax('A', 'Z') << endl;

    return 0;
}