//container
//Queue library 
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insert elements
    q.push(165);
    q.push(200);
    q.push(879);
    q.push(423);

    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;

    // Display and remove elements (FIFO order)
    cout << "Queue elements (FIFO order): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}