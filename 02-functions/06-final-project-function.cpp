#include <iostream>
using namespace std;

int secretNumber = 37;

void showIntro();
int getGuess();
void checkGuess(int guess, int secretNumber);

int main()
{
    int guess, numAttempts = 0;
    showIntro();
    do
    {
        guess = getGuess();
        if (guess <= 100 && guess >= 1)
        {
            numAttempts++;
            checkGuess(guess, secretNumber);
        }
        else
        {
            cout << "\nInvalid guess! Enter a number from 1 to 100." << endl;
        }


    } while (guess != secretNumber && numAttempts < 7);
    
    if (numAttempts == 7 && guess != secretNumber)
    {
        cout << "\nGame Over!\nThe secret number was " << secretNumber << "." << endl;
    }
    else if (numAttempts > 1)
    {
        cout << "\nYou guessed the number in " << numAttempts << " attempts!" << endl;
    }
    else
    {
        cout << "\nYou guessed the number in " << numAttempts << " attempt!" << endl;
    }



    return 0;
}

void showIntro()
{
    cout << "\n\n========== GUESS THE NUMBER ==========\n\nI'm thinking of a number from 1 to 100.(You got only 7 attempts)" << endl;
}

// Important function
int getGuess()
{
    int numGuess;
    cout << "\nEnter your guess: ";
    cin >> numGuess;

    return numGuess;
}

void checkGuess(int guess, int secretNumber)
{
    if (guess > secretNumber)
    {
        cout << "Too high!" << endl;
    }
    else if (guess < secretNumber)
    {
        cout << "Too low!" << endl;
    }
    else
    {
        cout << "Correct!" << endl;
    }
}