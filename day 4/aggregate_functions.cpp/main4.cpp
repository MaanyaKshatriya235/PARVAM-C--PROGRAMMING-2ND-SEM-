//greatest and smallest number
#include<iostream>
using namespace std;
int main()
{
    int n;
    //input size of array
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    //input array elements
    cout<<"enter"<<n<<"Elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //assume first element is greatest and smallest
    int greatest = arr[0];
    int smallest = arr[0];
    //find greatest and smallest
    for(int i=1;i<n;i++)
    {
        if(arr[i]>greatest)
        {
            greatest = arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }
    //output greatest and smallest
    cout<<"Greatest element: "<<greatest<<endl;
    cout<<"Smallest element: "<<smallest<<endl;
    return 0;
}