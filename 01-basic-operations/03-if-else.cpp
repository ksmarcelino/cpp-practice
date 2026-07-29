/*#include <iostream>
using namespace std;

int main() 
{
    int score;

    cout << "Enter your number: ";
    cin >> score;

    if (score >= 75)
    {
        cout << "You passed! :>" << endl;
        cout << "Congrats!" << endl;
    }
    else
    {
        cout << "You Failed! :<" << endl;
        cout << "Do better next time!" << endl; 
    }
        cout << "Program ended...";

    return 0;
}
*/
/*#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even number!" << endl;
    }
    else
    {
        cout << "Odd number!" << endl;
    }

        cout << "Program ended..." << endl;

    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter a temperature: ";
    cin >> temp;

    if (temp >= 30)
    {
        cout << "Hot!" << endl;
    }
    else if (temp >= 20)
    {
        cout << "Warm :>" << endl;
    }
    else
    {
        cout << "Cold :<" << endl;
    }
        cout << "Program ended..." << endl;
    
    return 0;
}