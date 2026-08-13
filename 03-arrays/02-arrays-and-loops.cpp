/*#include <iostream>
#include <string>

int main()
{   
    std::string foods[4];

    for(int i = 0; i < 4; i++)
    {
        std::cout <<"Enter Food #" << i + 1 << ": ";
        std::cin >> foods[i];
    }

    for(int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ". " << foods[i] << '\n';
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
}

#include <iostream>

int main()
{
    int scores[5];
    int total = 0;
    int studentPassed = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter Score #" << i + 1 << ": ";
        std::cin >> scores[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nStudent #" << i + 1 << ": " << scores[i] << '\n';
        if (scores[i] >= 75)
        {
            std::cout << scores[i] << " -> Passed" << '\n';
            studentPassed++;
        }
        else
        {
            std::cout << scores[i] << " -> Failed" << '\n';
        }
        total = total + scores[i];
    }


    std:: cout << "\nTotal Score: " << total << '\n';
    std:: cout << "Students Passed: " << studentPassed << '\n';


    return 0;
}

#include <iostream>

int main()
{
    int numbers[5];
    int total = 0;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter Number #" << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nNumber #" << i + 1 << ": " << numbers[i];

        if (numbers[i] >= 10)
        {
            count++;
        }

        total = total + numbers[i];
    }

    std::cout << "\n\nTotal: " << total << std::endl;   
    std::cout << "\nNumbers 10 or Higher: " << count << std::endl;

    return 0;
}*/

#include <iostream>

int main()
{
    int temperature[7];
    double totalTemp = 0;
    double aveTemp;
    int hotDays = 0, coolDays = 0;
    
    for (int i = 0; i < 7; i++)
    {
        std::cout << "Enter temperature for Day #" << i + 1 << ": ";
        std::cin >> temperature[i];
    }

    int highestTemp = temperature[0], lowestTemp = temperature[0];

    std::cout << "\n\n========= WEEKLY TEMPERATURES ==========\n";

    for (int i = 0; i < 7; i++)
    {
        std::cout << "\nDay #" << i + 1 << ": " << temperature[i];

        if (temperature[i] >= 32)
        {
            std::cout << " -> Hot";
            hotDays++;
        }

        else if (temperature[i] < 30)
        {
            std::cout << " -> Cool";
            coolDays++;
        }

        else
        {
            std::cout << " -> Normal";
        }

        if (temperature[i] > highestTemp)
        {
            highestTemp = temperature[i];
        }

        if (temperature[i] < lowestTemp)
        {
            lowestTemp = temperature[i];
        }

        totalTemp = totalTemp + temperature[i];
    }

    aveTemp = totalTemp / 7;

    std::cout << "\n\nTotal Temperature: " << totalTemp << '\n';
    std::cout << "Average Temperature: " << aveTemp << '\n';
    std::cout << "Hot Days: " << hotDays << '\n';
    std::cout << "Cool Days: " << coolDays << '\n';
    std::cout << "Highest Temperature: " << highestTemp << '\n';
    std::cout << "Lowest Temperature: " << lowestTemp << '\n';

    return 0;
}