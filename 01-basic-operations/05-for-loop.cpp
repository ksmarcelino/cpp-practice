/*#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i += 2)
    {
        cout << "love u dane." << endl; 
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
     int foods, money, change, price, quantity, total, grandTotal = 0;

    for (int i = 1; i <= 3; i++)
        {
           cout << "\n===== Order #" << i << " =====\n";
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
                    cout << "Pizza costs 250 pesos." << endl;
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
                    cout << "It's not in the menu!" << endl;
                    return 0;
           }

           cout << "\nHow many do you want? ";
           cin >> quantity;

           total = price * quantity;
           
           cout << "Total is: " << total << endl;

           cout << "Enter your money: ";
           cin >> money;

           if (money >= total)
           {
            grandTotal = grandTotal + total;
            change = money - total;
            cout << "Purchase successful." << endl;
            cout << "Your change: " << change << endl;
           }
           else
           {
            cout << "\nInsufficient money." << endl;
           }
        }
            
            cout << "\nYour total spent is: " << grandTotal << endl;
            cout <<"Thank you for ordering!" << endl;
            cout <<"\nProgram ended...";


    return 0;
}
