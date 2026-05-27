//nested if 
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    //outer if statement
    if(num>=0)
    {
        //nested if
        if(num %2==0)
        {
            cout << "The number is positive and even.";
        }
        else
        {
            cout << "the number is positive and odd.";
        }
    }
    else
    {
        cout << "The numbre is negative.";
    }
    return 0;
}