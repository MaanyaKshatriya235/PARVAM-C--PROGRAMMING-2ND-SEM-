//sorted smallest to largest
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int greatest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "Greatest number = " << greatest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}