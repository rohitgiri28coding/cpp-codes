// Create a class Account where:
// Each object has name, balance.
// A static int totalAccounts to count how many accounts are created.
// A function to show how many accounts exist.

#include<iostream>
using namespace std;


class Account{
    public: 
        string name;
        double balance;
        static int totalAccounts;

        Account(){
            totalAccounts++;
            name = "Anonymous";
            balance=0;
        }
        Account(string name, double balance): name(name), balance(balance){
            totalAccounts++;
        }

        void showTotalAccounts(){
            cout << "Total Accounts = " << totalAccounts << endl;
        }
};

int Account::totalAccounts=0;

int main(){

    Account a("Rohit", 10000000.0);

    a.showTotalAccounts();

    Account a1, a2, a3;

    a3.showTotalAccounts();

    return 0;

}