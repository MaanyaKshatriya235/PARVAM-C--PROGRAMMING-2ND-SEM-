//frequency
#include <iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"Enter the  number of elements: ";
    cin>>n;

//input array elements
cout<<"Enter: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
//frequency array
for(int i=0;i<n;i++)
{
    int count=1;
    //skip already counted elements
    bool alreadyCounted=false;
    for (int j=0;j<i;j++)
    {
        if(arr[i]==arr[j])
        {
            alreadyCounted=true;
            break;
        }
    }
    if (alreadyCounted)
    {
        continue;
    }
    //count frequency
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]){
            count++;
        }
    }
    cout<<arr[i]<<"appears" << count << "times "<< endl;
}
return 0;
}