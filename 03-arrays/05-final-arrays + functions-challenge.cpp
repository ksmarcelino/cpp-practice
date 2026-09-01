#include <iostream>

int findNumber(int numbers[], int size, int searchNumber);

void replaceNumber(int numbers[],  int index, int newNumber);
int main()
{
    int numbers[6] = {12, 25, 8, 40, 17, 30};

    int searchNumber, numReplace;

    std::cout << "Search number: ";
    std::cin >> searchNumber;

    int foundIndex = findNumber(numbers, 6, searchNumber);

    if (foundIndex != -1)
    {
        std::cout << "Student found at index " << foundIndex;
    }

    else
    {
        std::cout << "Student not found!" << '\n';
        return 0;
    }

    std::cout << "\n\nEnter replacement: ";
    std::cin >> numReplace;

    replaceNumber(numbers, foundIndex, numReplace);

    std::cout << "Updated array:" << '\n';

    for (int i = 0; i < 6; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}

int findNumber(int numbers[], int size, int searchNumber)
{

    int foundIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == searchNumber)
        {
            foundIndex = i;
            break;
        }

    }

    return foundIndex;
}

void replaceNumber(int numbers[], int index, int newNumber)
{
    numbers[index] = newNumber;
}