#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, value, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    // Display Original Elements
    cout << "\nOriginal Elements: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Sort
    sort(v.begin(), v.end());

    cout << "\n\nSorted Elements: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Maximum and Minimum
    cout << "\n\nMaximum Element = "
         << *max_element(v.begin(), v.end());

    cout << "\nMinimum Element = "
         << *min_element(v.begin(), v.end());

    // Search
    cout << "\n\nEnter element to search: ";
    cin >> key;

    if(find(v.begin(), v.end(), key) != v.end())
        cout << "Element Found";
    else
        cout << "Element Not Found";

    // Reverse
    reverse(v.begin(), v.end());

    cout << "\n\nReversed Elements: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}