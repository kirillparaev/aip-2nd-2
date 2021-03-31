#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;

    if (day>0 && day<32) {

    switch (day % 7){
    case 0:
        cout << "Monday";
        break;
    case 1:
        cout << "Tuesday";
        break;
    case 2:
        cout << "Wednesday";
        break;
    case 3:
        cout << "Thursday";
        break;
    case 4:
        cout << "Friday";
        break;
    case 5:
        cout << "Saturday";
        break;
    case 6:
        cout << "Sunday";
        break;
       }

    } else
        cout << "This day doesn't exist";

    return 0;
}
