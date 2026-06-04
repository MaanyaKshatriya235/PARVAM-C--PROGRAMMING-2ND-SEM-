//algorithms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> marks = {80, 95, 70, 85};

    sort(marks.begin(), marks.end());

    cout << "Sorted Marks: ";

    for(int m : marks)
    {
        cout << m << " ";
    }

    return 0;
}