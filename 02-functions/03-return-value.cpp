#include <iostream>
using namespace std;

int depositMoney(int balance, int amount)
{
    return balance + amount;
}

int main()
{
    int deposit, balance = 5000;
    cout << "Enter amount to deposit: ";
    cin >> deposit;

    balance = depositMoney(balance, deposit);

    cout << "Current Balance: " << balance << endl;


    return 0;
}