//centre value using functions
#include <iostream>
using namespace std;

// Function to find average
float findAverage(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
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

    float average = findAverage(arr, n);

    cout << "Average value is: " << average;

    return 0;
}