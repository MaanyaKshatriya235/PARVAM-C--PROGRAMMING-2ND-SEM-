//average value using functions
#include <iostream>
using namespace std;

// Function to find center value
int findCenter(int arr[], int n) {
    int middle = n / 2;
    return arr[middle];
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int center = findCenter(arr, n);

    cout << "Center value is: " << center;

    return 0;
}