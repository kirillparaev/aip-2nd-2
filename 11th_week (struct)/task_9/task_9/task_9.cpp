#include <iostream>

struct Device {
    float minValue;
    float maxValue;
    float error;
    float maxSpeed;
};

int main()
{
    Device a, b;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите информацию о датчике 1: минимальное и максимальное значение, погрешность, максимальная скорость: ";
    std::cin >> a.minValue >> a.maxValue >> a.error >> a.maxSpeed;
    std::cout << "Введите информацию о датчике 2: минимальное и максимальное значение, погрешность, максимальная скорость: ";
    std::cin >> b.minValue >> b.maxValue >> b.error >> b.maxSpeed;
    std::cout << "Средняя погрешность: " << (a.error + b.error) / 2;
}