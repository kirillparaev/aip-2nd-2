#include <iostream>
#include <cmath>

int main()
{
    float x,y;
    std::cout << "Enter a number: ";
    std::cin >> x;

    if ( x>3 ) {
        y = 2*x-10;
    } else if ( (x-3) < 0.00001 ) {     //if x=2
        y = 10;
    } else {
        y = (2*(x+1)*(x+1))-1;
    }

    std::cout << "Y is: "<< y << std::endl;
    return 0;
}
