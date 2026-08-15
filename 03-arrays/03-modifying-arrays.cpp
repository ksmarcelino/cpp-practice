/*#include <iostream>

int main()
{
    int numbers[5] = {12, 25, 38, 44, 57};
    int search;

    bool found = false;

    std::cout << "Search for: ";
    std::cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            found = true;
        }

        if (numbers[i] == search)
        {
            std::cout << search << " was found at position #" << i + 1 << '\n';
        }

    }
        if (found)
        {
            std::cout << "Number found!\n";
        }

        else
        {
            std::cout << "Number not found!\n";
        }

    

    return 0;
}*/

#include <iostream>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int newNumber, searchNumber;

    std::cout << "Number to replace: ";
    std::cin >> searchNumber;
    std::cout << "New number: ";
    std::cin >> newNumber;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == searchNumber)
        {
            found = true;
            numbers[i] = newNumber;
        }

        std::cout << numbers[i] << '\n';
    }

    if (found)
    {
        std::cout << "Number found!\n";
    }

    else
    {
        std::cout << "Number not found\n";
    }



    return 0;
}