#include <iostream>
#include <string>
#include <fstream>

//9. По введенному номеру дня недели вывести его название, используя оператор множественного выбора. 
//Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т. д.

std::string day;
int numOfDay;
void menu();
void textFileInput();
void textFileOutput();

int main()
{
    setlocale(LC_ALL, "Russian");
    menu();
}

void menu() {
    int userChoice;
    std::cout << "Метод ввода/вывода: " << std::endl;
    std::cout << "1) Консольный" << std::endl;
    std::cout << "2) Файловый (файл file.txt рядом с программой)" << std::endl;
    std::cout << "Выбор: ";
    std::cin >> userChoice;
    switch (userChoice)
    {
    case 1:
        std::cin.ignore(32767, '\n');   //очистка введённого потока от entera
        std::cout << "Введите номер дня недели: ";
        std::cin >> numOfDay;
        switch (numOfDay)
        {
        case 1:
            day = "Monday";
            std::cout << day << std::endl;
            break;
        case 2:
            day = "Tuesday";
            std::cout << day << std::endl;
            break;
        case 3:
            day = "Wednesday";
            std::cout << day << std::endl;
            break;
        case 4:
            day = "Thursday";
            std::cout << day << std::endl;
            break;
        case 5:
            day = "Friday";
            std::cout << day << std::endl;
            break;
        case 6:
            day = "Saturday";
            std::cout << day << std::endl;
            break;
        case 7:
            day = "Sunday";
            std::cout << day << std::endl;
            break;
        default:
            std::cout << "Такого дня недели не существует!" << std::endl;
            std::cout << std::endl;
            menu();
            break;
        }
        break;
    case 2:
        textFileInput();
        textFileOutput();
        break;
    default:
        std::cout << "Неправильный ввод!" << std::endl;
        std::cout << " " << std::endl;
        menu();
        break;
    }
}

void textFileInput() {
    std::ifstream input;
    input.open("file.txt", std::ios::in);
    if (input.is_open()) {
        input >> numOfDay;
    }
    input.close();
}

void textFileOutput() {
    std::ofstream output;
    output.open("file.txt", std::ios::out); //перезаписываем число
    if (output.is_open()) {
        switch (numOfDay)
        {
        case 1:
            day = "Monday";
            output << day << std::endl;
            break;
        case 2:
            day = "Tuesday";
            output << day << std::endl;
            break;
        case 3:
            day = "Wednesday";
            output << day << std::endl;
            break;
        case 4:
            day = "Thursday";
            output << day << std::endl;
            break;
        case 5:
            day = "Friday";
            output << day << std::endl;
            break;
        case 6:
            day = "Saturday";
            output << day << std::endl;
            break;
        case 7:
            day = "Sunday";
            output << day << std::endl;
            break;
        default:
            std::cout << "Такого дня недели не существует!" << std::endl;
            std::cout << std::endl;
            menu();
            break;
        }
    }
    output.close();
}