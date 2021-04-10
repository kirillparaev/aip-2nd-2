#include <iostream>

using namespace std;
int weight = 0;
int box21amount = 0;
int box17amount = 0;
int box16amount = 0;
void boxCounter();

int main()
{
    boxCounter();
    cout << "185 is made up by " << box21amount << " big boxes, " << box17amount << " medium boxes, and " << box16amount << " small boxes." << endl;
    return 0;
}

void boxCounter(){
    while (weight != 185){
        weight = weight + 21;
        box21amount++;

        if (weight + 21 > 185) {
            weight = weight + 17;
            box17amount++;
        }
        else if (weight + 17 >185){
            weight = weight + 16;
            box16amount++;
        }
        else if (weight + 16 > 185){
            cout << "Error";
        }
    }
}
