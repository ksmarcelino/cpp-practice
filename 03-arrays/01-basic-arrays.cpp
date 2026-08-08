#include <iostream>
#include <string>

int main()
{
    std:: string names[5];
    int viewChoice;

    std:: cout << "Enter Name #1: ";
    std:: cin >> names[0];

    std:: cout << "Enter Name #2: ";
    std:: cin >> names[1];

    std:: cout << "Enter Name #3: ";
    std:: cin >> names[2];

    std:: cout << "Enter Name #4: ";
    std:: cin >> names[3];

    std:: cout << "Enter Name #5: ";
    std:: cin >> names[4];

    std:: cout << "\nFirst Name: " << names[0] << std:: endl;
    std:: cout << "\nMidddle Name: " << names[2] << std:: endl;
    std:: cout << "\nLast Name: " << names[4] << std:: endl;

    std:: cout << "\nChange your middle name: ";
    std:: cin >> names[2];

    std:: cout << "\nFirst Name: " << names[0] << std:: endl;
    std:: cout << "\nMiddle Name: " << names[2] << std:: endl;
    std:: cout << "\nLast Name: " << names[4] << std:: endl;

    std:: cout << "\nWhich position do you want to view? (1-5): ";
    std:: cin >> viewChoice;

    if (viewChoice >= 1 && viewChoice <= 5)
    {
        std:: cout << "Name #" << viewChoice
                << ": " << names[viewChoice - 1] << '\n';
    }
    else
    {
        std:: cout << "Invalid Choice!\n";
    }

    return 0;
}

/*#include <iostream>
#include <string>

int main()
{
    int scores[5] = {75, 82, 91, 68, 88};

    scores[3] = 80;

    std:: cout << "First Score: " << scores[0] << std:: endl;
    std:: cout << "Third Score: " << scores[2] << std:: endl;
    std:: cout << "Last Score: " << scores[4] << std:: endl;
    std:: cout << "Fourth Score: " << scores[3] << std :: endl;

    return 0;
}*/