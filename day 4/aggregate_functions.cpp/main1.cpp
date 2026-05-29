//largest number
#include<iostream>
using namespace std;
//Functions to find the large naumber
int findLargest(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int largest=findLargest(num1,num2);
    cout<<"The largest number is:" <<largest;
    return 0;
}
