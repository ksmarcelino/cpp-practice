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
}

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
}*/

#include <iostream>
#include <string>

int main()
{
    std::string students[5];
    std::string searchStudent, renameStudent;
    int choice, foundIndex = -1;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter Student #" << i + 1 << ": ";
        std::cin >> students[i];
    }

    std::cout << "\nSearch student: ";
    std::cin >> searchStudent;


    for (int i = 0; i < 5; i++)
    {
        if (students[i] == searchStudent)
        {
            foundIndex = i;
            std::cout << '\n' << searchStudent << " was found at index #" << foundIndex << '\n';
        }

    }

    if (foundIndex != -1)
    {
        std::cout << "Student found!" << '\n';
        std::cout << "\nDo you want to rename this student?(1 or 2)\n\n1. Yes\n2. No\n\nChoose: ";
        std::cin >> choice;
    }

    else
    {
        std::cout << "Student not found!" << '\n';
        return 0;
    }
    
   switch(choice)
   {
    case 1:
        std::cout << "\nEnter new name: ";
        std::cin >> renameStudent;
        break;

    case 2:
        return 0;

    default:
        std::cout << "Invalid choice!" << '\n';
        return 0;
   }

   students[foundIndex] = renameStudent;

   for (int i = 0; i < 5; i++)
   {
        std::cout << students[i] << '\n';
   }

    return 0;
}

/*#include <iostream>

int main()
{
    int numbers[6] = {4, 8, 15, 16, 23, 42};
    int searchNumber, foundIndex = -1;

    std::cout << "Enter a number to search: ";
    std::cin >> searchNumber;


    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == searchNumber)
        {
            foundIndex = i;
        }
    }

    if (foundIndex != -1)
    {
        std::cout << "\nFound at index " << foundIndex << '\n';
    }
    else
    {
        std::cout << "\nNumber not found!" << '\n';
    }

    return 0;
}*/

