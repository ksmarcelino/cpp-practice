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

}*/


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

    for (int i = 0; i < size; i++)
    {
        if (highest < scores[i])
        {
            highest = scores[i];
        }

    }

    return highest;
}