//bamk account class
#include <iostream>
#include<string>
using namespace std;
class BankAccount{
private:
    string accountHolderName;
protected:
    double balance;
public:
    //onstructor
    BankAccount(string name, double initialBalance){
        accountHolderName = name;
        balance = initialBalance;
    }   
    //deposit function
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }
    //withdraw function
    void withdraw(double amount){
        if(amount > balance){
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        }
    }
    //display account info
    void displayAccountInfo(){
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main(){
    BankAccount account("John Doe", 1000.0);
    account.displayAccountInfo();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0); // Attempt to withdraw more than balance
    return 0;
}