#include <iostream>
#include <string>
#include <fstream>

//12. Составить алгоритм, заменяющий в тексте слова “правда” на “ложь”.

std::string text;
std::string toBeFound = "pravda";
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

        for (std::string::size_type i = 0; i < text.length(); i++)
            if (text[i] == toBeFound[0]) {
                if (text.substr(i, toBeFound.length()) == toBeFound)
                {
                    text.replace(i, toBeFound.length(), "lozh ");
                    text.erase(i+4, 1);
                    i += 3;
                }
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
        for (std::string::size_type i = 0; i < text.length(); i++)
            if (text[i] == toBeFound[0]) {
                if (text.substr(i, toBeFound.length()) == toBeFound)
                {
                    text.replace(i, toBeFound.length(), "lozh ");
                    text.erase(i + 4, 1);
                    i += 3;
                }
            }
        output << text;
    }
    output.close();
}