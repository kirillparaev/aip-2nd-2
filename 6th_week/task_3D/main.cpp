#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x,y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if ((x*x+y*y) < 1.0000001) {
        if (x < y && x > 0) {
            cout << "Belongs to" << endl;
        } else if (x < 0 && fabs(x) < y) {
            cout << "Belongs to" << endl;
        } else {
            cout << "Not belongs to" << endl;
        }
     }
     else {
        cout << "Not belongs to" << endl;
    }
    return 0;
}
