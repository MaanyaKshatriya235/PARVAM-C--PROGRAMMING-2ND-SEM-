//vector container
//Vector 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Elements in the vector are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\nSize of vector: " << v.size();

    // Remove last element
    v.pop_back();

    cout << "\nAfter pop_back(): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}