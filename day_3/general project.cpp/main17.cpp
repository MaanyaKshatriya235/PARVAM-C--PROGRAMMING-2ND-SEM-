//factorial
#include <iostream>
using namespace std;
int main()
{
    int num, fact ;
    cout << "Enter a number: ";
    cin >> num;

    fact =1;
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact;
    return 0;
}