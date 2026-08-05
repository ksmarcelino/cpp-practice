/*#include <iostream>
using namespace std;

void sayHello(string name);

int main ()
{
    sayHello("Dane");

    return 0;
}

void sayHello(string name)
{
    cout << "Hello " << name << "!" << endl;
}

#include <iostream>
using namespace std;

int add(int a, int b);

int multiply(int a, int b);

int main()
{
    cout << "Addition: " << add(10, 5) << endl;

    cout <<"Multiplication: " << multiply(20,30) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}*/

#include <iostream>
using namespace std;

void showMenu();
void showMovies();
int getTicketPrice(int movieChoice);
void printReceipt(int movieChoice, int tickets, int total);

int main ()
{
    int choice, tickets, movieChoice;
    double price, discount, total = 0;
    do
    {
        showMenu();
        cin >> choice;

        switch(choice)
        {
            case 1:
                showMovies();
                break;
            
            case 2:
                showMovies();
                cout << "\nChoose movie: ";
                cin >> movieChoice;
                if(movieChoice > 3 || movieChoice < 1)
                {
                    cout << "Invalid Movie!" << endl;
                    break;
                }

                price = getTicketPrice(movieChoice);

                cout << "How many tickets: ";
                cin >> tickets;

                if(tickets > 5)
                {
                    discount = price * tickets * 0.10;
                    total = price * tickets - discount ;
                    cout << "\nDiscount Applied!" << endl;
                }
                else
                {
                    total = price * tickets;
                }

                printReceipt(movieChoice, tickets, total);
                break;

            case 3:
                showMovies();
                cout << "Choose movie: ";
                cin >> movieChoice;

                cout << "Ticket Price: " << getTicketPrice(movieChoice) << endl;
                break;
            
            case 4:
                cout << "Thank you for using the Movie Ticket System!" << endl;

                cout << "\nProgram ended..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }
    while(choice != 4);


    return 0;
}
void showMenu()
{
    cout << "\n\n========== MOVIE TICKET SYSTEM ==========\n\n1. Show Movies\n2. Book Ticket\n3. Show Ticket Price\n4. Exit\n\nChoose: ";
}
void showMovies()
{
    cout << "\n1. Avengers\n2. Spider-Man\n3. Batman" << endl;
}
int getTicketPrice(int movieChoice)
{
    switch(movieChoice)
    {
        case 1:
            return 300;

        case 2:
            return 250;

        case 3:
            return 280;

        default:
            cout << "Invalid Movie!" << endl;
    }
}
void printReceipt(int movieChoice, int tickets, double total)
{
    cout << "\n\n========== RECEIPT ==========\n\n" ;

    switch(movieChoice)
    {
        case 1:
            cout << "Movie: Avengers" << endl;
            break;

        case 2:
            cout << "Movie: Spider-Man" << endl;
            break;

        case 3:
            cout << "Movie: Batman" << endl;
            break;

        default:
            cout << "Invalid Movie" << endl;
    }
    cout << "Tickets: " << tickets << endl;
    cout << "Total: " << total << endl;
    cout << "\n\n=============================\n\n";
}