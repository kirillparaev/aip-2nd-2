#include <iostream>
#include <locale.h>
#include <vector>

//9.	Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести на экран матрицу, описывающую двумерное изображение. 
//Изображение состоит из пикселей. Каждый пиксель характеризуется яркостью цветовых каналов: красный, синий, зелёный. 

struct Pixel {
    int red, blue, green;
};

const int rows = 3;
const int cols = 3;
Pixel image[rows][cols];
void imageInit();
void getMatrix();

int main()
{
    setlocale(LC_ALL, "Russian");
    imageInit();
    getMatrix();
}

void imageInit() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Введите через пробел оттенки красного, синего , зелёного: ";
            std::cin >> image[i][j].red >> image[i][j].blue >> image[i][j].green;
        }
    }
}

void getMatrix() {
    std::cout << "     " << std::endl;
    std::cout << "Текущие пиксели: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "|" << image[i][j].red << ", " << image[i][j].blue << ", " << image[i][j].green << "|" << "  ";
        }
        std::cout << std::endl;
    }
}