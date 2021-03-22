#include <iostream>
#include <cmath>
#include <fstream>

int main()
{

    //вычисляем значение выражения e^(x−2) + |sin(x)| − x^4⋅cos(1/x) при x=3.6

    std::ofstream outFile;
    outFile.open("result.txt");

    float x = 3.6;
    outFile << pow(M_E, (x-2)) + abs(sinf(x)) - (pow(x,4) * cos(1/x));

    std::cout << "Check result.txt file in program's directory" << std::endl;
    outFile.close();

    getchar();
    getchar();
    return 0;
}
