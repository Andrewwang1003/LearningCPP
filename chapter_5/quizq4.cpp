// Enter the name of person #1: John Bacon
// Enter the age of John Bacon: 37
// Enter the name of person #2: David Jenkins
// Enter the age of David Jenkins: 44
// David Jenkins (age 44) is older than John Bacon (age 37).

#include <iostream>
#include <string>
#include <string_view>

std::string find_name(int number){
    std::cout << "Enter the name of person #" << number << ": " ;
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int get_age(std::string_view name){
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;
    return age;
}

int main(){

    const std::string name1 {find_name(1)};
    const int age1 {get_age(name1)};
    const std::string name2 {find_name(2)};
    const int age2 {get_age(name2)};
    if (age1 < age2){
        std::cout << name1 << "(age " << age1 << ") is older than " << name2 << " (age " << age2 << ")\n";
    } else {
        std::cout << name2 << "(age " << age2 << ") is older than " << name1 << " (age " << age1 << ")\n";
    }
}