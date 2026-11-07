#include <iostream>
#include "function.h"

double enter_value(){
    std::cout << "Enter a double value: ";
    double num{};
    std::cin >> num;
    return num;
}

char enter_function(){
    std::cout << "Enter +, -, *, or /: ";
    char funct{};
    std::cin >> funct;
    return funct;
}

void print(double num1, char funct, double num2){
    double result {};
    if (funct == '+'){
        result = num1 + num2;
    } else if (funct == '-'){
        result = num1 - num2;
    } else if (funct == '*'){
        result = num1 * num2;
    } else if (funct == '/'){
        result = num1 / num2;
    } else{
        return;
    }   
    std::cout << num1 << " " << funct << " " << num2 << " is " << result << "\n";
}