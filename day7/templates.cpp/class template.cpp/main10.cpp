//Product Price
#include <iostream>
using namespace std;

template <class T>
class Product
{
    T price;

public:
    Product(T p)
    {
        price = p;
    }

    void display()
    {
        cout << "Price = " << price << endl;
    }
};

int main()
{
    Product<int> p1(500);
    Product<float> p2(499.99);

    p1.display();
    p2.display();

    return 0;
}