//Dynamic Memory Allocation for an Array
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];   // Dynamic array

    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;   // Free array memory

    return 0;
}