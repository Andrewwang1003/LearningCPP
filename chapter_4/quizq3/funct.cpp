#include <iostream>
#include "funct.h"

double get_height(){
    std::cout << "Enter the height of the tower in meters: ";
    double h {};
    std::cin >> h;
    return h;
}

double fallen(double h, int time)
{
    double fall_height {9.8*time*time/2};
    if ((h - fall_height) < 0)
    {
        return 0;
    }
    return (h - fall_height);
}

void print(double h, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << h << " meters\n";

}
