#include <iostream>

struct RoboPlane {
    float speed;
    float radius;
    float koef;
};

int main()
{
    RoboPlane x;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите параметры робота-самолёта (скорость вращения винта): ";
    std::cin >> x.speed;
    std::cout << "Введите параметры робота-самолёта (радиус винта): ";
    std::cin >> x.radius;
    std::cout << "Введите параметры робота-самолёта (коэффициент тяги): ";
    std::cin >> x.koef;

    std::cout << "Тяга, создаваемая винтом: " << (x.speed * x.radius * x.koef);
}