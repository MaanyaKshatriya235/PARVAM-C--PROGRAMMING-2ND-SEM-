//
#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accName;
    float balance;

public:
    // Setters
    void setAccName(string name)
    {
        accName = name;
    }

    void setBalance(float bal)
    {
        balance = bal;
    }

    // Getters
    string getAccName()
    {
        return accName;
    }

    float getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount b;

    b.setAccName("Harshith");
    b.setBalance(5000);

    cout << "Account Name: " << b.getAccName() << endl;
    cout << "Balance: " << b.getBalance() << endl;

    return 0;
}