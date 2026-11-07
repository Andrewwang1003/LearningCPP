#include <iostream>

int main() {
    std::cout << "Enter a single character: ";
    char input {};
    std::cin >> input;
    int a {input};
    std::cout << "You enter " << input << ", which has a ASCII code " << a << "\n";
    return 0;
}
