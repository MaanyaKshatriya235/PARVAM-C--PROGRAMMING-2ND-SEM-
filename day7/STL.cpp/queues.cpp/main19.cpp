//iterators
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> tokens;

    tokens.push(101);
    tokens.push(102);
    tokens.push(103);

    cout << "Queue Elements: ";

    while(!tokens.empty())
    {
        cout << tokens.front() << " ";
        tokens.pop();
    }

    return 0;
}