//permutation 
#include <iostream>
using namespace std;

// Function to find factorial
int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    int npr = factorial(n) / factorial(n - r);

    cout << "Permutation (nPr) = " << npr;

    return 0;
}