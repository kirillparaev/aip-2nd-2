#include <iostream>
#include <string>
#include <fstream>

//18. Дана строка. Удалите k-ый символ в ней.

std::string text;
void menu();
void textFileInput();
void textFileOutput();
size_t index = 0;

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
    std::cout << "Введите номер символа, который требуется удалить: ";
    std::cin >> index;
    index--;
    switch (userChoice)
    {
    case 1:
        std::cin.ignore(32767, '\n');   //очистка введённого потока от entera
        std::getline(std::cin, text);

        text.erase(index, 1);

        std::cout << "Result: ";
        std::cout << text << std::endl;
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
        std::getline(input, text); //записываем из файла input в переменную word;
    }
    input.close();
}

void textFileOutput() {
    std::ofstream output;
    output.open("file.txt", std::ios::out); //записываем в конец файла
    if (output.is_open()) {
        text.erase(index, 1);
        output << text;
    }
    output.close();
}