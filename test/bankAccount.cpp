#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acc;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNo, double initialBalance) {
        acc = accNo;
        balance = initialBalance;
    }

    // Method to get the account holder's name
    int getAcc() {
        return acc;
    }

    // Method to get the current balance
    double getBalance() {
        return balance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid or insufficient amount for withdrawal!" << endl;
        }
    }
};
