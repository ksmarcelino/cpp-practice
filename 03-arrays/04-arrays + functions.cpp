/*#include <iostream>

int getTotal(int numbers[], int size);

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int result = getTotal(numbers, 5);

    std::cout << "Total: " << result << '\n';




    return 0;
}

int getTotal(int numbers[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + numbers[i];

    }

    return total;

}


#include<iostream>

int getHighest(int scores[], int size);

int main()
{
    int scores[6] = {75, 90, 82, 68, 95, 88}; 

    int highestScore = getHighest(scores, 6);

    std::cout << "Highest Score: " << highestScore << '\n';



    return 0;
}

int getHighest(int scores[], int size)
{
    int highest = scores[0];

    for (int i = 1; i < size; i++)
    {
        if (highest < scores[i])
        {
            highest = scores[i];
        }

    }

    return highest;
}

#include <iostream>
#include <string>

int findStudent(std::string students[], int size, std::string searchStudent);

int main()
{
    
    std::string students[5] = {"Dane", "Ian", "Maria", "Alex", "David"};
    std::string searchStudent;

    std::cout << "Search student: ";
    std::cin >> searchStudent;

    int foundIndex = findStudent(students, 5, searchStudent);

    if (foundIndex != -1)
    {
        std::cout << "Student found at index " << foundIndex;
    }

    else
    {
        std::cout << "Student not found!";
    }

    return 0;
}

int findStudent(std::string students[], int size, std::string searchStudent)
{
    int foundIndex = -1;


    for (int i = 0; i < size; i++)
    {
        if (students[i] == searchStudent)
        {
            foundIndex = i;
            break;
        }

    }

    return foundIndex;
}*/

#include <iostream>

void changeNumber(int numbers[], int index, int newNumber);

int main()
{
    int numbers[5] = {5, 10, 15, 20, 25};

    int indexChange, newNumber;

    std::cout << "Enter index to change: ";
    std::cin >> indexChange;
    std::cout << "Enter new number: ";
    std::cin >> newNumber;

    changeNumber(numbers, indexChange, newNumber);

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << '\n';
    }




    return 0;
}

void changeNumber(int numbers[], int index, int newNumber)
{
    numbers[index] = newNumber;
}