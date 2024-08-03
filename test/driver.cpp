#include <iostream>
#include <string>
#include "bankAccount.cpp"
using namespace std;

int main() {
    // Creating a bank account object
    BankAccount myAccount(111, 1000.0);

    // Displaying initial account details
    cout << "Account No: " << myAccount.getAcc() << endl;
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    // Performing deposit and withdrawal operations
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying updated balance
    cout << "Updated Balance: $" << myAccount.getBalance() << endl;

    return 0;
}