//iterators
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> books;

    books.push(1);
    books.push(2);
    books.push(3);

    cout << "Stack Elements: ";

    while(!books.empty())
    {
        cout << books.top() << " ";
        books.pop();
    }

    return 0;
}