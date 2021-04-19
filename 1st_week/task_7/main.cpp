#include <iostream>
#include <fstream>
void fileOutput();
int num;

//Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа.

int main()
{
    std::cout << "Enter a number: ";
    std::cin >> num;
    fileOutput();
    std::cout << "Check result.txt file in program's directory" << std::endl;
    return 0;
}

void fileOutput(){
    std::ofstream outFile;
    outFile.open("result.txt");
    outFile << "Square of your number: " << num * num << std::endl;
    outFile << "Cube of your number: " << num * num * num << std::endl;
    outFile.close();
}
