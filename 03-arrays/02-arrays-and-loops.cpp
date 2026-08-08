/*#include <iostream>
#include <string>

int main()
{   
    std:: string foods[4];

    for(int i = 0; i < 4; i++)
    {
        std:: cout <<"Enter Food #" << i + 1 << ": ";
        std:: cin >> foods[i];
    }

    for(int i = 0; i < 4; i++)
    {
        std:: cout << i + 1 << ". " << foods[i] << '\n';
    }

    return 0;
}*/

/*#include <iostream>
 
int main ()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = numbers [i] * 2;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << '\n';
    }

    return 0;
}*/

#include <iostream>

int main()
{
    int scores[5];
    int total = 0;
    int studentPassed = 0;

    for (int i = 0; i < 5; i++)
    {
        std:: cout << "Enter Score #" << i + 1 << ": ";
        std:: cin >> scores[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std:: cout << "\nStudent #" << i + 1 << ": " << scores[i] << '\n';
        if (scores[i] >= 75)
        {
            std:: cout << scores[i] << "-> Passed" << '\n';
            studentPassed++;
        }
        else
        {
            std:: cout << scores[i] << "-> Failed" << '\n';
        }
        total = total + scores[i];
    }


    std:: cout << "\nTotal Score: " << total << '\n';
    std:: cout << "Students Passsed: " << studentPassed << '\n';


    return 0;
}