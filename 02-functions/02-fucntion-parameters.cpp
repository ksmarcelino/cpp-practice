/*#include <iostream>
using namespace std;

void greet(string name)
{
    cout << "Hello " << name << "!" << endl;
}

int main()
{
    greet("Dane");

    return 0;
}*/

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "\n\n===== BANK =====\n\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\nChoose: ";
}
void showBalance(int balance)
{
    cout << "Current Balance: " << balance << endl;
}
void depositMoney(int amount)
{
    cout << "Deposited: " << amount << endl;
}
void withDrawMoney(int amount, int balance)
{
    if(amount <= balance)
    {
        cout << "Withdrawal Successful." << endl;
    }
    else
    {
        cout << "Insufficient balance." << endl;
    }
}

int main()
{
    int withDraw, bankChoices, deposit, balance = 5000;

    do
    {
        showMenu();
        cin >> bankChoices;

        switch(bankChoices)
        {
            case 1:
                showBalance(balance);
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> deposit;

                depositMoney(deposit);
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> withDraw;
                withDrawMoney(withDraw, balance);
                break;

            case 4:
                cout << "Thank you for using the bank system!" << endl;

                cout << "\nProgram ended..." << endl;
                break;

        }

    }
    while(bankChoices != 4);


    return 0;
}

