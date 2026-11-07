#include <iostream>
#include "funct.h"

int main()
{
    double h {get_height()};
    int time {0};
    double new_h {h};

    while (new_h > 0)
    {
        new_h= fallen(h, time);
        print(new_h, time);
        time++;

    }
    return 0;
}

// fix the new height stuff. That stuff isn't needed and should be ignored as it should call a function tht has time and height and then gives an output