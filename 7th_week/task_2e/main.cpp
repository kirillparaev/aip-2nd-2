#include <iostream>

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
        y = (2+min)*(2+min) + 3*min;
        cout << min << "        " << y << endl;
        min = min+dx;
    }

    return 0;
}
