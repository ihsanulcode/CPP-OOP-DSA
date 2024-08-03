#include <iostream>
#include "bankAccount.cpp"
using namespace std;

int main(){
    // Create a bank account
    BankAccount myaccount(111, 500.0);

    // Check account info
    cout << "Account No: " << myaccount.getAcc() << endl;
    cout << "Initial Balance: $" << myaccount.getBalance() << endl;

    // Performing deposit and withdrawal operations
    myaccount.deposit(500.0);
    cout << "Balance: $" << myaccount.getBalance() << endl;
    myaccount.withdraw(2000);
    myaccount.withdraw(500);
    cout << "Balance: $" << myaccount.getBalance() << endl;
    myaccount.withdraw(-1000);
}