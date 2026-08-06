#include <iostream>
using namespace std;

int main ()
{
        string name;

        cout << "Enter name: ";
        cin >> name;

        if(name != "Dane")
        {
                cout << "Wrong name!" << endl;
        }
        else
        {
                cout << "Passed!" << endl;
        }


        return 0;
}





/*#include <iostream>
using namespace std;

int main() {
        int d, e;
        
        cout << "Enter two numbers: ";
        cin >> d >> e;


        cout << "Addition: " << d + e << endl;
        cout << "Subtraction: " << d - e << endl;
        cout << "Multiplication: " << d * e << endl;
        cout << "Division: " << d / e << endl;
        cout << "Remainder: " << d % e << endl;

        return 0;
}*/