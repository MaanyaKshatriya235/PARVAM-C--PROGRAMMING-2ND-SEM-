//creatingan array for 10 to 15 numbers
//sorting the array in ascending order
//create a function for finding the smallest and greatest number in the array
//find the centrel element of the array
//find the frequency of each element in the array
//find the average of the elements in the array

//creatingan array for 10 to 15 numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Displaying the array in elements.
    cout<<"The elements in the array are:\n";
    for(int i=0;i<n;i++)    {
        cout<<arr[i]<<" ";
    }
    // for sorting the array elements.
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        
    cout<<"\nThe elements in ascending order are:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //descending order
    cout<<"\nThe elements in descending order are:\n";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    //create a function for finding the smallest and greatest number in the array
    cout<<"\nThe smallest element is: "<<arr[0]<<endl;
    cout<<"The greatest element is: "<<arr[n-1]<<endl;  
    //find the centrel element of the array
    cout<<"The central element is: "<<arr[n/2]<<endl;
    //frequency of each element
    cout<<"The frequency of each element is:\n";
    for(int i=0;i<n;i++)
    {
        int count=1;
        bool alreadyCounted=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                alreadyCounted=true;
                break;
            }
        }
        if(alreadyCounted)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        cout<<arr[i]<<" appears "<<count<<" times\n";
    }
    return 0;
}