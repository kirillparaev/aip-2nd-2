#include <iostream>
#include <locale.h>

//10. Реализовать сложение, вычитание, умножение, транспонирование матриц (разрешается фиксированный размер матриц).
//11.2 - матричная норма Lбесконечность - норма
//11.5 - матричная норма

const int rows = 3;
const int cols = 3;
int multiplier = 0;
int matrix1[rows][cols];
int matrix2[rows][cols];
int matrixResult[rows][cols];
int choice = 0;

void matrixesInit();
void matrixAdd();
void matrixSub();
void getResult();
void getMatrixes();
int userChoice();
void matrixOnNumberMult();
void matrixOnMatrixMult();
void matrixTransponing();

int main()
{
    setlocale(LC_ALL, "Russian");
    userChoice();
    return(0);
}

int userChoice() {
    std::cout << "Что вы хотите сделать?" << std::endl;
    std::cout << "1) Сложить матрицы" << std::endl;
    std::cout << "2) Вычесть матрицы" << std::endl;
    std::cout << "3) Умножить матрицу на число" << std::endl;
    std::cout << "4) Перемножить матрицы" << std::endl;
    std::cout << "5) Транспонировать матрицу" << std::endl;
    std::cout << "6) Просмотреть матрицы" << std::endl;
    std::cout << "7) Выйти" << std::endl;
    std::cout << "Выбор: ";
    std::cin >> choice;

    if (choice != 6 && choice != 7) {
        matrixesInit();
    }

    switch (choice) {
    case 1: 
        matrixAdd();
        break;
    case 2:
        matrixSub();
        break;
    case 3:
        matrixOnNumberMult();
        break;
    case 4:
        matrixOnMatrixMult();
        break;
    case 5:
        matrixTransponing();
        break;
    case 6:
        getMatrixes();
        getResult();
        userChoice();
        break;
    case 7:
        return(0);
        break;
    default:
        std::cout << "Неправильный ввод!" << std::endl;
        std::cout << " " << std::endl;
        userChoice();
    }
    return(0);
}

void matrixesInit() {
    std::cout << " " << std::endl;
    std::cout << "Введите 1 матрицу: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Введите элемент строки " << i+1 << " столбца " << j+1 << ": ";
            std::cin >> matrix1[i][j];
        }
    }
    
    if (choice == 1 || choice == 2 || choice == 4) {
        std::cout << " " << std::endl;
        std::cout << "Введите 2 матрицу: " << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << "Введите элемент строки " << i+1 << " столбца " << j+1 << ": ";
                std::cin >> matrix2[i][j];
            }
        }
    }
    
    getMatrixes();
}

void getMatrixes() {
    std::cout << " " << std::endl;
    std::cout << "Текущая матрица 1: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    if (choice == 1 || choice == 2 || choice == 4 || choice == 6) {
        std::cout << " " << std::endl;
        std::cout << "Текущая матрица 2: " << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << matrix2[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}

void matrixAdd() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        std::cout << std::endl;
    }
    getResult();
    userChoice();
}

void matrixSub() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixResult[i][j] = matrix1[i][j] - matrix2[i][j];
        }
        std::cout << std::endl;
    }
    getResult();
    userChoice();
}

void getResult() {
    std::cout << " " << std::endl;
    std::cout << "Результат: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrixResult[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << " " << std::endl;
}

void matrixOnNumberMult() {
    std::cout << "  " << std::endl;
    std::cout << "Введите множитель: ";
    std::cin >> multiplier;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixResult[i][j] = matrix1[i][j] * multiplier;
        }
        std::cout << std::endl;
    }
    getResult();
    userChoice();
}

void matrixOnMatrixMult() {
    int matrixMult1 = 0;
    int matrixMult2 = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixResult[i][j] = 0;
            for (int k = 0; k < 3; k++)
                matrixResult[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
    getResult();
    userChoice();
}

void matrixTransponing() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixResult[i][j] = matrix1[j][i];
        }
     }
    getResult();
    userChoice();
}