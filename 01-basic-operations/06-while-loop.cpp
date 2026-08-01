/*#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;

    cout << "Enter a positive number: ";
    cin >> num;

    while (i <= num)
    {
        cout << i << endl;

        i++;

    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    string epass;

    cout << "Enter the pasword: ";
    cin >> epass;

    while (epass != "loveudane")
    {
        cout << "Wrong password!" << endl;

        cout << "Enter the password again: ";
        cin >> epass;
    }
    
    cout << "Access Granted." << endl;

    cout << "\nProgram ended..." << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int deposit, atmChoices, total, withdraw, grandTotal = 5000;
    string rtransact;

    while (atmChoices != 4)
    {   
        cout << "\n\n======= ATM =======\n\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\nChoose: ";
        cin >> atmChoices;

        switch(atmChoices)
        {
            case 1:
                cout << "\nCurrent Balance: " << grandTotal << endl;

                cout << "Do you want another transaction?\n1. Yes\n2. No\nEnter: ";
                cin >> rtransact;

                if(rtransact == "Yes")
                {
                    break;
                }
                else if (rtransact == "No")
                {
                    cout << "Thank you for using the ATM!" << endl;
                    return 0;
                }
                else
                {
                    cout << "Invalid Choice!" << endl;
                    return 0;
                }

            case 2:
                cout << "\nEnter amount to deposit: ";
                cin >> deposit;
                grandTotal = grandTotal + deposit;
                cout << "New Balance: " << grandTotal << endl;
                cout << "Deposit Successful." << endl;
                break;

            case 3:
                cout << "\nEnter amount to withdraw: ";
                cin >> withdraw;

                if(withdraw <= grandTotal)
                {
                grandTotal = grandTotal - withdraw;

                cout << "New Balance: " << grandTotal << endl;
                cout << "Withdraw successful." << endl;
                }
                else
                {
                    cout << "Insufficient balance." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM." << endl;

                cout << "\nProgram ended..." << endl;
            
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }
    return 0;
}