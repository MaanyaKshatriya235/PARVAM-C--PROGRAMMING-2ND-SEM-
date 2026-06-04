//container
//Stacks Libary
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(100);
    s.push(200);
    s.push(300);

    cout << "Top element: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;

    if(s.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;
}