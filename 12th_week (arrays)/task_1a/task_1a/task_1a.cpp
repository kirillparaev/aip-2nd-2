#include <iostream>
#include <string>
void carsOutput();

struct engine
{
    int cylinders;
    float horsepower, volume;
};

struct car {
    float width, length, height;
    std::string color;
    engine dvs;
};

car cars[10];

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 10; i++) {
        cars[i].width = rand() % (150 - 0 + 1) + 0;
        cars[i].length = rand() % (300 - 0 + 1) + 0;
        cars[i].height = rand() % (300 - 0 + 1) + 0;
        cars[i].dvs.cylinders = 8;
        cars[i].dvs.horsepower = rand() % (1000 - 0 + 1) + 1000;
        cars[i].dvs.volume = rand() % (500 - 50 + 1) + 50;
        cars[i].color = "белый";
    }
    carsOutput();
}

void carsOutput() {
    for (int i = 0; i < 10; i++) {
        std::cout << "Машина № " << i << std::endl;
        std::cout << "Ширина: " << cars[i].width << std::endl;
        std::cout << "Длина: " << cars[i].length << std::endl;
        std::cout << "Высота: " << cars[i].height << std::endl;
        std::cout << "Цилиндров: " << cars[i].dvs.cylinders << std::endl;
        std::cout << "Лошадиных сил: " << cars[i].dvs.horsepower << std::endl;
        std::cout << "Объём двигателя: " << cars[i].dvs.volume << std::endl;
        std::cout << "Цвет машины: " << cars[i].color << std::endl;
        std::cout << "               " << std::endl;
    }
}