#include <iostream>
#include <cmath>

int main()
{
    float x,y;
    std::cout << "Enter a number: ";
    std::cin >> x;

    if ( x>2 ) {
        y = 2*x-15;
    } else if ( (x-2) < 0.00001 ) {     //if x=2
        y = 5;
    } else {
        y = 3 * (fabs(x-1) - 8);
    }

    std::cout << "Y is: "<< y << std::endl;
    return 0;
}
