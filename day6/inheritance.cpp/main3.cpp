//AI-Powered Market Prediction System
#include <iostream>
using namespace std;

// Base Class
class MarketProduct
{
protected:
    string productName;
    float currentPrice;

public:
    void setProduct(string name, float price)
    {
        productName = name;
        currentPrice = price;
    }

    void showDetails()
    {
        cout << "Product Name : " << productName << endl;
        cout << "Current Price: Rs." << currentPrice << " per kg" << endl;
    }
};

// Derived Class 1
class Fruit : public MarketProduct
{
public:
    void predictPrice()
    {
        float futurePrice = currentPrice * 1.15; // 15% increase
        cout << "Predicted Fruit Price : Rs." << futurePrice << " per kg" << endl;
    }
};

// Derived Class 2
class Vegetable : public MarketProduct
{
public:
    void predictPrice()
    {
        float futurePrice = currentPrice * 1.10; // 10% increase
        cout << "Predicted Vegetable Price : Rs." << futurePrice << " per kg" << endl;
    }
};

// Derived Class 3
class Pulse : public MarketProduct
{
public:
    void predictPrice()
    {
        float futurePrice = currentPrice * 1.20; // 20% increase
        cout << "Predicted Pulse Price : Rs." << futurePrice << " per kg" << endl;
    }
};

int main()
{
    Fruit fruit;
    fruit.setProduct("Mango", 80);
    cout << "\n--- Fruit ---\n";
    fruit.showDetails();
    fruit.predictPrice();

    Vegetable vegetable;
    vegetable.setProduct("Tomato", 40);
    cout << "\n--- Vegetable ---\n";
    vegetable.showDetails();
    vegetable.predictPrice();

    Pulse pulse;
    pulse.setProduct("Toor Dal", 120);
    cout << "\n--- Pulse ---\n";
    pulse.showDetails();
    pulse.predictPrice();

    return 0;
}