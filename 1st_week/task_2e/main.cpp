#include <iostream>
#include <fstream>
#include <cmath>
float diag1, diag2;
void fileOutput();

//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: ромб

int main()
{
    std::cout << "Enter first diagonal: ";
    std::cin >> diag1;

    std::cout << "Enter second diagonal: ";
    std::cin >> diag2;

    fileOutput();

    std::getchar();
    std::getchar();
    return 0;
}

void fileOutput(){
    std::ofstream outFile;
    outFile.open("result.txt");
    outFile << "Area is: " << (diag1 * diag2)/2 << std::endl;
    outFile << "Perimeter is: " << 2*sqrt( pow(diag1, 2) + pow(diag2, 2) ) << std::endl;
    std::cout << "Check result.txt file in program's directory" << std::endl;
    outFile.close();
}
