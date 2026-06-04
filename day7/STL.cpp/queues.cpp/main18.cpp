//algorithm
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> customers;

    customers.push(5);
    customers.push(10);
    customers.push(15);

    int total = 0;

    while(!customers.empty())
    {
        total += customers.front();
        customers.pop();
    }

    cout << "Total Amount = " << total;

    return 0;
}