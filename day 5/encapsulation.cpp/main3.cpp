// This program demonstrates encapsulation in C++ using private and protected members.
// The Employee class has a private member for the employee's name and a protected member for the salary.
// The Manager class inherits from Employee and can access the protected salary member to increase it.
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string employeeName;   // Private member

protected:
    double salary;         // Protected member

public:
    // Constructor
    Employee(string name, double sal) {
        employeeName = name;
        salary = sal;
    }

    // Public getter
    string getName() {
        return employeeName;
    }

    double getSalary() {
        return salary;
    }
};

// Derived class
class Manager : public Employee {
public:
    Manager(string name, double sal) : Employee(name, sal) {}

    void increaseSalary(double amount) {
        salary += amount;  // Accessing protected member
    }

    void displayDetails() {
        cout << "Updated Salary: " << salary << endl;
    }
};

int main() {
    Manager emp("Rahul", 50000);

    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    emp.increaseSalary(5000);

    cout << "\nAfter Salary Increment:" << endl;
    emp.displayDetails();

    return 0;
}