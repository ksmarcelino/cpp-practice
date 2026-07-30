/*#include <iostream>
using namespace std;

int main()
{
    int color;

    cout << "Enter a number (1-3): ";
    cin >> color;

    switch(color)
    {
    case 1:
        cout << "Red";
        break;

    case 2:
        cout << "Blue";
        break;

    case 3:
        cout << "Green";
        break;

    default:
        cout << "Invalid Color";
    }

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int operation;

    cout << "1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\nChoose: ";
    cin >> operation;

    switch(operation)
    {
    case 1:
        cout << "Addition selected";
        break;
    
    case 2:
        cout << "Subtraction selected";
        break;

    case 3:
        cout << "Multiplication selected";
        break;

    case 4:
        cout << "Division selected";
        break;

    default:
        cout << "Invalid Operation!";
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int foods, money, change, price;

    cout << "1. Burger\t- 120\n2. Pizza\t- 250\n3. Chicken\t- 180\n4. Fries\t- 80\n\nChoose your order: ";
    cin >> foods;

    switch(foods)
    {
        case 1:
            price = 120;
            cout << "Burger costs 120 pesos." << endl;
            break;

        case 2:
            price = 250;
            cout <<"Pizza costs 250 pesos." << endl;
            break;

        case 3:
            price = 180;
            cout << "Chicken costs 180 pesos." << endl;
            break;

        case 4:
            price = 80;
            cout << "Fries costs 80 pesos." << endl;
            break;
        
        default:
            cout << "Invalid food choice!" << endl;
            return 0;
    }
            cout << "Enter your money: ";
            cin >> money;

            change = money - price;

            if (money >= price)
            {
                cout << "Purchase successful." << endl;
                cout << "Your change: " << change << endl;
            }
            else
            {
                cout << "Insufficient money." << endl;
            }

            cout << "\nProgram ended...";
    return 0;
}