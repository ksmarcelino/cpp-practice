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
    int choice;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter Student #" << i + 1 << ": ";
        std::cin >> students[i];
    }

    std::cout << "\nSearch student: ";
    std::cin >> searchStudent;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (students[i] == searchStudent)
        {
            found = true;
        }

        if (students[i] == searchStudent)
        {
            std::cout << '\n' << searchStudent << " was found at position #" << i + 1 << '\n'; 
        }
    }

    if (found)
    {
        std::cout << "Student found!" << '\n';
    }

    else
    {
        std::cout << "Student not found!" << '\n';
    }

    std::cout << "\nDo you want to rename this student?(1 or 2)\n\n1. Yes\n2. No\n\nChoose: ";
    std::cin >> choice;
    
   switch(choice)
   {
    case 1:
        std::cout << "\nEnter new name: ";
        std::cin >> renameStudent;
        break;

    case 2:
        return 0;
        break;

    default:
        std::cout << "Invalid choice!" << '\n';
   }

   for (int i = 0; i < 5; i++)
   {
        if (students[i] == searchStudent)
        {
            students[i] = renameStudent;
        }

        std::cout << students[i] << '\n';
   }
    return 0;
}

