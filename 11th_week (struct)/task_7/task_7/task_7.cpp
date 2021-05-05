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
    if (a.maxSpeed < b.maxSpeed) {
        std::cout << "Данные о датчике с минимальной скоростью: \n";
        std::cout << "Минимальное значение: " << a.minValue << std::endl;
        std::cout << "Максимальное значение: " << a.maxValue << std::endl;
        std::cout << "Погрешность: " << a.error << std::endl;
        std::cout << "Максимальная скорость: " << a.maxSpeed;
    }
    else {
        std::cout << "Данные о датчике с минимальной скоростью: \n";
        std::cout << "Минимальное значение: " << b.minValue << std::endl;
        std::cout << "Максимальное значение: " << b.maxValue << std::endl;
        std::cout << "Погрешность: " << b.error << std::endl;
        std::cout << "Максимальная скорость: " << b.maxSpeed;
    }
}