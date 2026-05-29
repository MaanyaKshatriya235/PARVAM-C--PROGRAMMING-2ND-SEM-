//array value
#include <iostream>
#include <algorithm> // for sort

void inputArray(int arr[], int n) {
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

void sortArray(int arr[], int n) {
    std::sort(arr, arr + n); // ascending order
}

void printArray(int arr[], int n) {
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "How many numbers? Enter 10 to 15: ";
    std::cin >> n;

    if (n < 10 || n > 15) {
        std::cout << "Please enter a number between 10 and 15." << std::endl;
        return 1;
    }

    int arr[15]; // max size 15

    inputArray(arr, n);
    sortArray(arr, n);
    printArray(arr, n);

    return 0;
}