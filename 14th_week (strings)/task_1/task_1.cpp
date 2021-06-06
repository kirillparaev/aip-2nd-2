#include <iostream>
#include <string>
#include <fstream>

//1. Составить алгоритм, находящий, сколько раз в тексте сочетание “ум” встречается не в начале слова.

std::string text;
std::string toBeFound = "um";
void menu();
void textFileInput();
void textFileOutput();
size_t count = 0;

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

        for (std::string::size_type i = 0; i < text.length(); i++)
            if (text[i] == toBeFound[0] && i != 0) {
                if (text.substr(i, toBeFound.length()) == toBeFound)
                {
                    count++;
                    i += toBeFound.length() - 1;
                }
            }
        std::cout << "Um ne v nachale texta bylo naideno " << count << " raz" << std::endl;
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
    output.open("file.txt", std::ios::app); //записываем в конец файла
    if (output.is_open()) {
        for (std::string::size_type i = 0; i < text.length(); i++)
            if (text[i] == toBeFound[0] && i != 0) {
                if (text.substr(i, toBeFound.length()) == toBeFound)
                {
                    count++;
                    i += toBeFound.length() - 1;
                }
            }
        output << std::endl;
        output << "Um ne v nachale texta bylo naideno " << count << " raz" << std::endl;
    }
    output.close();
}