#include <iostream>
#include "function.h"

int main() {
    double num1 {enter_value()};
    double num2 {enter_value()};
    char funct {enter_function()};
    
    print(num1, funct, num2);
    return 0; 
}
