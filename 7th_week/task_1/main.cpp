#include <iostream>

using namespace std;

int main()
{
    int amount_of_strings;
    cout << "Enter amount of strings: ";
    cin >> amount_of_strings;

    for (int i = 1; i <= amount_of_strings; i++){
        for (int j = 1; j <= i; j++){
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}
