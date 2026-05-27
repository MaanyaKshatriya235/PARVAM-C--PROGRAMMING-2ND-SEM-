//prime number
#include <iostream>
using namespace std;

int main()
{
    int n, i, count = 2;

    cout << "Enter a number: ";
    cin >> n;

    while(count < n)
    {
        i = 2;
        bool isPrime = true;

        while(i <= count / 2)
        {
            if(count % i == 0)
            {
                isPrime = false;
                break;
            }
            i++;
        }

        if(isPrime && count > 1)
        {
            cout << count << " ";
        }

        count++;   // Missing statement
    }

    return 0;
}