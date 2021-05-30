#include <iostream>
#include <locale.h>
#include <climits>

//5. В квадратной матрице для каждой строки найти минимальный элемент и переставить его с элементом, стоящим в этой строке на главной диагонали.

const int rows = 4;
const int cols = 4;
int matrix[rows][cols];
void matrixInit();
void task_5();
void getMatrix();
int minOfRow(int row);

int main()
{
    setlocale(LC_ALL, "Russian");
    matrixInit();
    task_5();
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

void task_5() {
    std::cout << "Находим минимальный элемент в строке и переставляем на главную диагональ..." << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                matrix[i][j] = minOfRow(i);
            }
        }
    }
    std::cout << "Завершено" << std::endl;
    std::cout << " " << std::endl;
    getMatrix();
}

int minOfRow(int row) {
    int minimum = INT_MAX;
    for (int j = 0; j < cols; j++) {
        if (matrix[row][j] < minimum) {
            minimum = matrix[row][j];
        }
    }
    return (minimum);
}