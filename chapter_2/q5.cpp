#include <iostream>
// This Homework from CS31 course at UCLA, not learnCPP

int main()
{
    std::cout << "Please enter an Integer between 0 and 100: \n";
    int num {};
    std::cin >> num;

    if (num <= 0 || num >= 100){
        std::cout << "Liar, liar, plants for hire. \n";
    }
    if (num > 50){
        std::cout << "Almost to 100! \n";
    } else {
        std::cout << "Still a-ways to go! \n";
    }
}