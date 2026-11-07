#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your first number: ";
    int num1 {};
    std::cin >> num1;
    
    std::cout << "Enter your second number: ";
    int num2 {};
    std::cin >> num2;

    std::cout << "Enter your command: ";
    std::string command;
    std::cin.ignore(10000, '\n');
    std::getline(std::cin, command);
    if(command == "Add"){
        std::cout << "result: " << num1 + num2 << "\n";
        return 0;
    }
    if(command == "Subtract"){
        std::cout << "result: " << num1 - num2 << "\n";
        return 0;
    }
    if(command == "Multiply"){
        std::cout << "result: " << num1 * num2 << "\n";
        return 0;
    }
    if(command == "Divide"){
        std::cout << "result: " << num1 / num2 << "\n";
        return 0;
    }
    return 1;
}