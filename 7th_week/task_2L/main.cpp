#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float dx, min, max;
    cout << "Enter size of a step: ";
    cin >> dx;
    cout << "Enter minimum and maximum of a function (use space): ";
    cin >> min >> max;

    cout << "        " << endl;
    cout << "x" << "        " << "y" << endl;

    while (max > min) {
        float y;
        y = sqrt(5*min + 4*pow(min, 3)) + 4*min + (3/sinf(9*min + 71));
        cout << min << "        " << y << endl;
        min = min+dx;
    }

    return 0;
}
