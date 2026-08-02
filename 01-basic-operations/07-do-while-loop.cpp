/*#include <iostream>
using namespace std;

int main()
{
    int i = 2;

    do
    {

        cout << "missudane" << endl;
        i += 2;
    }
    while (i <= 10);
    
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int menuAct, num;

    do
    {
        cout << "\n\n===== MENU =====\n\n1. Say Hello\n2. Enter a number\n3. Exit\n\nEnter: "; 
        cin >> menuAct;

        switch(menuAct)
        {
            case 1:
                cout << "Hello!" << endl;
                break;

            case 2:
                cout << "Enter a number: " ;
                cin >> num;

                cout << "You entered: " << num << endl;
                break;

            case 3:
                cout << "Thank you for using this!" << endl;

                cout <<"\nProgram ended..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }
    while (menuAct != 3);

    return 0;
}*/

// The Student System //

#include <iostream>
using namespace std;

int main()
{
    int userChoices, enterGrade, studentGrade = -1;
    string status = "No grade entered yet.";

    do
    {
        cout << "\n\n========== STUDENT SYSTEM ==========\n\n1. Enter Student Grade\n2. Show Last Grade\n3. Exit\n\nChoose: ";
        cin >> userChoices;

        switch(userChoices)
        {
            case 1:
                cout << "Enter student's grade: ";
                cin >> studentGrade;
                cout << "Grade saved!" << endl;
                if (studentGrade < 0 || studentGrade > 100)
                {
                    cout << "Invalid grade." << endl;
                }
                break;
                if (studentGrade >= 90)
                {
                    status = "Excellent";
                    cout << "Status: " << status << endl;
                }
                else if (studentGrade >= 75)
                {
                    status = "Passed";
                    cout << "Status: " << status << endl;
                }
                else
                {
                    status = "Failed";
                    cout << "Status: " << status << endl;
                    cout << "Do better next time." << endl;
                }

            case 2:

                if (studentGrade == -1)
                {
                    cout << "Last entered grade: None" << endl;
                    cout << "Status: " << status << endl;
                }
                else
                {
                    cout << "Last entered grade: " << studentGrade << endl;
                    cout << "Status: " << status << endl;

                }               
                break;

            case 3:
                cout << "Thank you for using this" << endl;

                cout << "\nProgram ended..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
                break;
        }

    }
    while (userChoices != 3);
    
    return 0;
}