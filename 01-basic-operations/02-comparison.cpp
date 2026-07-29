#include <iostream>
using namespace std;

int main() 
{
    int age;

    cout << "Enter your age: ";
    cin >> age ;
    
    cout << (age >= 18) << endl;
    cout << (age < 18) << endl;
    cout << !(age >= 18) << endl;

    return 0;
}