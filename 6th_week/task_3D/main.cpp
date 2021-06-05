#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    float x, y;
};

int main()
{
    cout << "Enter x coordinate: ";
    cin >> Point.x;
    cout << "Enter y coordinate: ";
    cin >> Point.y;

    if ((Point.x * Point.x + Point.y * Point.y) < 1.0000001) {
        if (Point.x < Point.y && Point.x > 0) {
            cout << "Belongs to" << endl;
        } else if (Point.x < 0 && fabs(Point.x) < Point.y) {
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
