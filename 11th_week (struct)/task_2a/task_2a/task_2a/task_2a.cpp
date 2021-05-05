#include <iostream>
#include <cmath>

struct compNum {
    float floatPart;
    float imagePart;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    compNum x;
    std::cout << "Введите вещественную и мнимую части числа через пробел: ";
    std::cin >> x.floatPart >> x.imagePart;
    std::cout << "Модуль числа: " << sqrt(pow(x.floatPart, 2) + pow(x.imagePart, 2));
}