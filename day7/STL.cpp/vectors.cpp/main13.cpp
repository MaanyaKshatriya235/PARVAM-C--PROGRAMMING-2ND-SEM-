//iterators
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks = {80, 90, 85};

    vector<int>::iterator it;

    cout << "Marks: ";

    for(it = marks.begin(); it != marks.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}