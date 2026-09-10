/*#include <iostream>

int main()
{
    int number = 50;
    double price = 19.99;
    char grade = 'A';

    std::cout << "Number value: " << number << '\n';
    std::cout << "Number address: " << &number << '\n';

    std::cout << "\nPrice value: " << price << '\n';
    std::cout << "Price address: " << &price << '\n';

    std::cout << "\nGrade value: " << grade << '\n';
    std::cout << "Grade address: " << static_cast<void*>(&grade) << '\n';

    std::cout << '\n';
    std::cout << sizeof(number) << '\n';
    std::cout << sizeof(price) << '\n';
    std::cout << sizeof(grade) << '\n';

    return 0;
}*/

// ARRAY ADDRESSES

#include <iostream>

int main()
{
    int numbers[3] = {10, 20, 30};

    std::cout << &numbers[0] << '\n';
    std::cout << &numbers[1] << '\n';
    std::cout << &numbers[2] << '\n';

    return 0;
}