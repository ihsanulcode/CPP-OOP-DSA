#include <iostream>
using namespace std;

class BankAccount {
private:
    int acc;
    double balance;

public:
    BankAccount(int accNo, double initBalance){
        acc = accNo;
        balance = initBalance;
    }

    int getAcc(){
        return acc;
    }

    double getBalance(){
        return balance;
    }

    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }else{
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }else{
            cout << "Invalid or insufficient amount for withdrawal!" << endl;
        }
    }
};