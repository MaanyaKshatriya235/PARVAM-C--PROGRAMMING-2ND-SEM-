//calculator
#include<iostream>
using namespace std;
//Functions for basic arithmetic operations
int main()
{
    int a,b,choice;
    cout<< "enter the value of a and b:";
    cin>>a>>b;
    if(b==0)
    {
     cout<<"Division by zero is not allowed"<<endl;
    }
    else
    {
        cout<<"Enter the choice: 1.Addition 2.Subtraction 3.Multiplication 4.Division: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"The sum is: "<<a+b<<endl;
                break;
            case 2:
                cout<<"The difference is: "<<a-b<<endl;
                break;
            case 3:
                cout<<"The product is: "<<a*b<<endl;
                break;
            case 4:
                cout<<"The quotient is: "<<a/b<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}