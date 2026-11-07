// Question #1
//
// output is 8
// #include <iostream>

// int main() {
//     int input {};
//     std::cout << "Enter an Integer: ";
//     std::cin >> input;
//     if (input % 1 == 0){
//         std::cout << "Even";
//     } else {
//         std::cout << "Odd";
//     }

#include <iostream>

std::string getQuantityPhrase(int apples){
    if (apples < 0){
        return "negative";
    }
    if (apples == 0){
        return "no";
    }
    if (apples == 1){
        return "a single";
    }
    if (apples == 2){
        return "a couple of";
    }
    if (apples == 3){
        return "a few";
    }
    return "many";
}

std::string getApplesPluralized(int apples){
    return (apples == 1) ? "apple" : "apples";
}


// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}

