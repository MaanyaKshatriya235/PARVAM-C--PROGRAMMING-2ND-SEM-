//abstraction
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Sum = " << c.add(10, 20);

    return 0;
}