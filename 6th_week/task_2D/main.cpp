#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if ((x*x+y*y) < 1.0000001) {
        if (x < y) {
            cout << "Belongs to" << endl;
        } else if (x < 0.00000001) {
            cout << "Belongs to" << endl;
        }
    }
    else {
        cout << "Not belongs to" << endl;
    }
    return 0;
}
