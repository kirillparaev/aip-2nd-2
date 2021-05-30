#include <iostream>
#include <locale.h>

//2. Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.

const int rows = 4;
const int cols = 3;
int matrix[rows][cols];
void matrixInit();
void task_2();
void getMatrix();

int main()
{
    setlocale(LC_ALL, "Russian");
    matrixInit();
    task_2();
}

void matrixInit() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Введите элемент строки " << i << " столбца " << j << ": ";
            std::cin >> matrix[i][j];
        }
    }
    getMatrix();
}

void getMatrix() {
    std::cout << "Текущая матрица: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void task_2() {
    std::cout << "Умножаем элементы каждой строки на второй элемент этой же строки..." << std::endl;
    for (int i = 0; i < rows; i++) {
        int multiplier = matrix[i][1];
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = matrix[i][j] * multiplier;
        }
    }
    std::cout << "Завершено" << std::endl;
    std::cout << " " << std::endl;
    getMatrix();
}