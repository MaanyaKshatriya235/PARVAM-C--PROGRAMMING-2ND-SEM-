//Maximum & Minimum
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 25, 5, 80, 40};

    cout << "Maximum: " << *max_element(arr, arr + 5) << endl;
    cout << "Minimum: " << *min_element(arr, arr + 5) << endl;

    return 0;
}