#include <iostream>

//1a - заполняем массив числами от 0 до 10
//2c - сумма элементов массива - меньших 5, больших 6, меньших 4
//11 - выводим элементы меньше среднего арифметического
//4 - вычисляем произведение отрицательных и положительных чисел
//10 - заменяем отрицательные числа нолями
//14 - создаём новый массив мутём перемножения двух других

void task_1a();
void task_2c();
void task_4();
void task_10();
void task_11();
void task_14();

int sumLessThan5 = 0;
int sumMoreThan6 = 0;
int sumLessThan4 = 0;
int positiveMult = 1;
int negativeMult = 1;
float average = 0;
int numbers[20];
float floats[20];
float results[20];

void task_1a() {
    for (int i = 0; i < 20; i++) {
        if (i < (rand() % 11)) {
            numbers[i] = rand() % 11;      // min + rand() % (max - min)
        }
        else {
            numbers[i] = -(rand() % 8);    //распределение отрицательных чисел
        }
        std::cout << "Number " << i + 1 << ": " << numbers[i] << std::endl;
        if (i < 19) {
            average += numbers[i];
        }
        else {
            average = ((average + numbers[i]) / 20);
        }
    }
}

void task_2c() {
    for (int i = 0; i < 20; i++) {
        if (numbers[i] > 6) {
            sumMoreThan6 += numbers[i];
        }
        else if (numbers[i] < 4) {
            sumLessThan4 += numbers[i];
            sumLessThan5 += numbers[i];
        }
        else if (numbers[i] < 5) {
            sumLessThan5 += numbers[i];
        }
    }
    std::cout << "Sum of nums less than 5: " << sumLessThan5 << std::endl;
    std::cout << "Sum of nums less than 4: " << sumLessThan4 << std::endl;
    std::cout << "Sum of nums more than 6: " << sumMoreThan6 << std::endl;
}

void task_11() {
    std::cout << "Average is: " << average << std::endl;

    for (int i = 0; i < 20; i++) {
        if (numbers[i] < average) {
            std::cout << "Number less than average: " << numbers[i] << std::endl;
          }
    }
}

void task_4() {
    for (int i = 0; i < 20; i++) {
        if (numbers[i] > 0) {
            positiveMult = positiveMult * numbers[i];
        }
        else if (numbers[i] < 0) {
            negativeMult = negativeMult * numbers[i];
        }
    }
    std::cout << "Result of multiplication of all positive nums: " << positiveMult << std::endl;
    std::cout << "Result of multiplication of all negative nums: " << negativeMult << std::endl;
}

void task_10() {
    std::cout << "All negative nums are now zeros: " << std::endl;
    for (int i = 0; i < 20; i++) {
        if (numbers[i] < 0) {
            numbers[i] = 0;
        }
        std::cout << "Number " << i + 1 << ": " << numbers[i] << std::endl;
    }
}

void task_14() {
    std::cout << "Multiplicating numbers and floats: " << std::endl;
    for (int i = 0; i < 20; i++) {
        floats[i] = (rand() % 20) / 2.5;
        std::cout << "Float number " << i+1 << ": " <<  i+1  << floats[i] << std::endl;
    }

    for (int i = 0; i < 20; i++) {
        results[i] = numbers[i] * floats[i];
        std::cout << "New value #" << i + 1 << ": " << results[i] << std::endl;
    }
}

int main()
{
    std::cout << "---------------------------Initial numbers array--------------------------" << std::endl;
    task_1a();
    std::cout << "       " << std::endl;
    std::cout << "----------------------------Various array stats---------------------------" << std::endl;
    task_2c();
    std::cout << "       " << std::endl;
    std::cout << "------------Average of the array and numbers lesser than that-------------" << std::endl;
    task_11();
    std::cout << "       " << std::endl;
    std::cout << "----------Multiplications of all positive and negative numbers------------" << std::endl;
    task_4();
    std::cout << "       " << std::endl;
    std::cout << "--Creating new array of floats by multiplicating random ints and floats---" << std::endl;
    task_14();
    std::cout << "       " << std::endl;
    std::cout << "-----------------Changing all negative numbers with zeros-----------------" << std::endl;
    task_10();
    std::cout << "       " << std::endl;
}