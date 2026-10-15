#include <iostream>


int double_num(int num){
    return num * 2;
}

int main() {
    int num {};
    std::cout << "Enter a int: ";
    std::cin >> num;
    std::cout << "double of "<< num << " is " << double_num(num) << "\n";
    return 0;
}