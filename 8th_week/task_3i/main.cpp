#include <iostream>
#include <cmath>

int A,x;
float y = 0;
using namespace std;
void formulaProcess(int A, int x);
int factorial(int num);

int main()
{
    cout << "Enter A and x: ";
    cin >> A >> x;
    formulaProcess(A,x);
    cout << "Answer is: " << y+1;
    return 0;
}

void formulaProcess(int A, int x) {
    int n = 2;
    int powNumerator = 1;
    while (n <= A) {
        y = y + (pow(-1,powNumerator) * pow(x,n) ) / factorial(n);
        powNumerator++;
        n = n+2;
    }
}

int factorial(int num){
    int result = 1;
    for (int i = 2; i <= num; i++){
        result = result*i;
    }
    return result;
}
