#include <iostream>
#include "function.h"

int readNumber()
{
    std::cout << "Enter a integer: ";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The Answer is: " << x << "\n";
}