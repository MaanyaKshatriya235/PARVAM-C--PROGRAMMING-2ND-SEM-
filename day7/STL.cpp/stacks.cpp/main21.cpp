//algorithms
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> marks;

    marks.push(80);
    marks.push(90);
    marks.push(70);

    int maxMark = 0;

    while(!marks.empty())
    {
        if(marks.top() > maxMark)
        {
            maxMark = marks.top();
        }

        marks.pop();
    }

    cout << "Highest Mark: " << maxMark;

    return 0;
}