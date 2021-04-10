#include <iostream>
#include <cmath>

int startA = 7;
int A,x;
float y = 0;
using namespace std;
void formulaProcess(int A, int x);

int main()
{
    cout << "Enter a (>=7) and x: ";
    cin >> A >> x;
    formulaProcess(A,x);
    cout << "Answer is: " << y;
    return 0;
}

void formulaProcess(int A, int x){
    int numerator = 1, powNumerator = 1;
    while (startA <= A){
        y = y + (numerator*pow(-1, powNumerator) / (startA*x));
        numerator++; powNumerator++; startA++;
    }
}
