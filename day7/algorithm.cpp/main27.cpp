//Find
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    int *p = find(arr, arr + 4, 30);

    if (p != arr + 4)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}