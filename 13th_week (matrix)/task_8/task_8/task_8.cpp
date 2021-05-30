#include <iostream>
#include <locale.h>

//8. Дана матрица.Элементы первой строки — мощность электромотора, второй строки — категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.

const int rows = 2;
const int cols = 5;
int matrix[rows][cols];
void matrixInit();
void task_8();
void getMatrix();

int main()
{
    setlocale(LC_ALL, "Russian");
    matrixInit();
    task_8();
}

void matrixInit() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0) {
                std::cout << "Введите мощность электромотора # " << j + 1 << ": ";
                std::cin >> matrix[i][j];
            }
            else {
                std::cout << "Введите категорию электромотора № " << j + 1 << ": ";
                std::cin >> matrix[i][j];
            }
            
        }
    }
    getMatrix();
}

void getMatrix() {
    std::cout << "     " << std::endl;
    std::cout << "Текущие моторы: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void task_8() {
    std::cout << "Находим самый мощный мотор категории 3..." << std::endl;
    int maximum = 0;
    int numOfMaxEngine = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] > maximum && matrix[1][j] == 3) {
                maximum = matrix[0][j];
                numOfMaxEngine = j + 1;
            }
        }
    }
    std::cout << "    " << std::endl;
    std::cout << "Самый мощный мотор категории 3 имеет номер: " << numOfMaxEngine << std::endl;
    std::cout << "Мощность: " << maximum << std::endl;
}