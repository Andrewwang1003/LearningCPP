#include <iostream>
#include <string>

int main(){
    int n {};
    std::cout << "Enter a number: ";
    std::cin >> n;
    int sum {};
    while(n>0){
        sum += (n%10);
        n /= 10;
    } 
    std::cout << "The sum of the digits in your number is " << sum << "!\n";
    return 0;
}
