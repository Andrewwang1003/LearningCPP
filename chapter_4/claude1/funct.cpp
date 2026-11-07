#include "funct.h"
#include <iostream>

char getCharacter(){
    std::cout << "Enter a character: " ;
    char input {};
    std::cin >> input;
    return input;
}

void printReport(char c){
    std::cout << "Character: " << c << "\n";
    std::cout << "ASCII code: " << static_cast<int>(c) << "\n";
    std::cout << "category: ";
    if (isUpper(c)){
        std::cout << "uppercase letter\n";
        std::cout << "opposite case: " << toOppositeCase(c) << "\n";
    } else if (isLower(c)){
        std::cout << "lowercase letter\n";
        std::cout << "opposite case: " << toOppositeCase(c) << "\n";
    } else if (isdigit(c)){
        std::cout << "digit\n";
    } else{
        std::cout << "Other\n";
    }
    char next {static_cast<char>(c + 1)};
    std::cout << "Next character: " << next << "\n";
}

bool isUpper(char c){
    int ascii {static_cast<int>(c)};
    return (ascii >= 97 || ascii <= 122);
}

bool isLower(char c){
    int ascii {static_cast<int>(c)};
    return (ascii >= 65 || ascii <= 90);
}

bool isDigit(char c){
    int ascii {static_cast<int>(c)};
    return (ascii >= 48 || ascii <= 57);
}

char toOppositeCase(char c){
    if(islower(c)){
        return c-32;
    } else 
        return c+32;
}