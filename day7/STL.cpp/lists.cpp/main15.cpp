//algorithms
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers = {40, 10, 30, 20};

    numbers.sort();

    cout << "Sorted List: ";

    for(int n : numbers)
    {
        cout << n << " ";
    }

    return 0;
}