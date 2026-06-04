//Count
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 2};

    cout << "Count of 2 = " 
         << count(arr, arr + 5, 2);

    return 0;
}