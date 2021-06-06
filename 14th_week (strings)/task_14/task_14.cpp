#include <iostream>
#include <string>
#include <fstream>

//14. Дана строка. Если она начинается на 'abc', то заменить их на 'www', иначе добавить в конец строки 'zzz'.

std::string text;
std::string toBeFound = "abc";
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
    switch (userChoice)
    {
    case 1:
        std::cin.ignore(32767, '\n');   //очистка введённого потока от entera
        std::getline(std::cin, text);

        if (text.substr(0, toBeFound.length()) == toBeFound) {
                text.replace(0, toBeFound.length(), "www");
        }
        else {
            text.append("zzz");
        }

        std::cout << "Result: " << std::endl;
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
        if (text.substr(0, toBeFound.length()) == toBeFound) {
            text.replace(0, toBeFound.length(), "www");
        }
        else {
            text.append("zzz");
        }
        output << text;
    }
    output.close();
}