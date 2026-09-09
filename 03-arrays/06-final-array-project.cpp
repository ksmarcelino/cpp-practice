#include <iostream>
#include <string>

void displayStudents(std::string students[], int scores[], int size);

int findStudent(std::string students[], int size, std::string searchStudent);

void changeScore(int scores[], int index, int newScore);

int getHighestScore(int scores[], int size);

int main()
{
    std::string students[5] = {"Dane", "Ian", "Maria", "Alex", "David"};
    
    int scores[5] = {85, 78, 92, 74, 88};

    int userOptions, foundIndex, newScore;
    std::string searchStudent;

    do
    {
        std::cout << "\n\nSTUDENT SCORE MANAGER\n\n1. Display students\n2. Search student\n3. Change student score\n4. Show highest score\n5. Exit\n\nChoose: ";
        std::cin >> userOptions;

        switch (userOptions)
        {
            case 1:

                displayStudents(students, scores, 5);
                break;

            case 2:
            {
                std::cout << "Search student: ";
                std::cin >> searchStudent;

                foundIndex = findStudent(students, 5, searchStudent);

                if (foundIndex != -1)
                {
                    std::cout << searchStudent << " found at index " << foundIndex << '\n';
                    std::cout << "Score: " << scores[foundIndex];

                }

                else
                {
                    std::cout << "Student not found!" << '\n';
                }
                break;
            }

            case 3:
            {
                std::cout << "Student name: ";
                std::cin >> searchStudent;

                foundIndex = findStudent(students, 5, searchStudent);

                if (foundIndex != -1)
                {
                    std::cout << "Enter new score: ";
                    std::cin >> newScore;

                    changeScore(scores, foundIndex, newScore);

                    std::cout << "\nScore updated successfully!";
                }
                else
                {
                    std::cout << "Student not found!";
                    break;
                }
                break;
            }
            case 4:
            {
                int highestScore = getHighestScore(scores, 5);

                std::cout << "Highest score: " << highestScore;
                break;
            }

            case 5:

                std::cout << "Thank you for using the program!" << '\n';
                std::cout << "\n\nProgram exiting..." << '\n';
                break;
                
            default:

                std::cout << "Invalid choice!" << '\n';
                break;
        }
      
    } while(userOptions != 5);
    
    return 0;
}

void displayStudents(std::string students[], int scores[], int size)
{

    std::cout << '\n';

    for (int i = 0; i < size; i++)
    {
        std::cout <<students[i] << " - " << scores[i] << '\n';
    }
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
}

void changeScore(int scores[], int index, int newScore)
{
    scores[index] = newScore;
}

int getHighestScore(int scores[], int size)
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