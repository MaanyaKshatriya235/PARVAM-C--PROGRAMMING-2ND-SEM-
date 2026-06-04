//Sorted 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};

    sort(arr, arr + 5);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}