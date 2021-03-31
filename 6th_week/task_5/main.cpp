#include <iostream>

using namespace std;

int day, firstDayOfMonth;
void firstIsMonday();
void firstIsTuesday();
void firstIsWednesday();
void firstIsThursday();
void firstIsFriday();
void firstIsSaturday();
void firstIsSunday();

int main()
{

    cout << "Enter place of the first day of month: ";
    cin >> firstDayOfMonth;
    cout << "Enter day number: ";
    cin >> day;


    if (day>0 && day<32) {

        switch (firstDayOfMonth) {
        case 1:
        firstIsMonday();
        break;

        case 2:
        firstIsTuesday();
        break;

        case 3:
        firstIsWednesday();
        break;

        case 4:
        firstIsThursday();
        break;

        case 5:
        firstIsFriday();
        break;

        case 6:
        firstIsSaturday();
        break;

        case 7:
        firstIsSunday();
        break;
        }

    } else
        cout << "This day doesn't exist";

    return 0;
}

void firstIsMonday(){

    switch (day % 7){
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 0:
        cout << "Sunday";
        break;
        }
    }

void firstIsTuesday(){

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
    }

void firstIsWednesday(){

    switch (day % 7){
    case 6:
      cout << "Monday";
      break;
    case 0:
      cout << "Tuesday";
      break;
    case 1:
        cout << "Wednesday";
        break;
    case 2:
        cout << "Thursday";
        break;
    case 3:
        cout << "Friday";
        break;
    case 4:
        cout << "Saturday";
        break;
    case 5:
        cout << "Sunday";
        break;
        }
    }

void firstIsThursday(){

    switch (day % 7){
    case 5:
      cout << "Monday";
      break;
    case 6:
      cout << "Tuesday";
      break;
    case 0:
        cout << "Wednesday";
        break;
    case 1:
        cout << "Thursday";
        break;
    case 2:
        cout << "Friday";
        break;
    case 3:
        cout << "Saturday";
        break;
    case 4:
        cout << "Sunday";
        break;
        }
    }

void firstIsFriday(){

    switch (day % 7){
    case 4:
      cout << "Monday";
      break;
    case 5:
      cout << "Tuesday";
      break;
    case 6:
        cout << "Wednesday";
        break;
    case 0:
        cout << "Thursday";
        break;
    case 1:
        cout << "Friday";
        break;
    case 2:
        cout << "Saturday";
        break;
    case 3:
        cout << "Sunday";
        break;
        }
    }

void firstIsSaturday(){

    switch (day % 7){
    case 3:
      cout << "Monday";
      break;
    case 4:
      cout << "Tuesday";
      break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 0:
        cout << "Friday";
        break;
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
        }
    }

void firstIsSunday(){

    switch (day % 7){
    case 2:
      cout << "Monday";
      break;
    case 3:
      cout << "Tuesday";
      break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 0:
        cout << "Saturday";
        break;
    case 1:
        cout << "Sunday";
        break;
        }
    }
