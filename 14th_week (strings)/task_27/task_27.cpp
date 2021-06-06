#include <iostream>
#include <string>
#include <fstream>

//27. Реализуйте метод, осуществляющий сжатие строки на основе счетчика повторяющихся символов.
//Например, строка aaabbccccc должна превратиться в a3b2c5. 
//Если сжатая строка оказалась длиннее исходной, то результатом работы алгоритма должна быть исходная строка. 
//Решить задачу с предположением, что в исходной строке нет цифр. Решить задачи для произвольной строки. (см. Приложение с примерами).

std::string text;
std::string toBeFound;
void menu();
void textFileInput();
void textFileOutput();
size_t index = 0;
int counter = 1;
int beginningOfReplacing = 0;

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

        for (std::string::size_type i = 0; i < text.length(); i++) {
            beginningOfReplacing = i;
            toBeFound[0] = text[i];
            while (text[i] == toBeFound[0] && text[i + 1] == toBeFound[0] && i < text.length()) {
                counter++;
                i++;
                toBeFound[0] = text[i];
            }
            if (counter > 1) {
                text.erase(beginningOfReplacing + 1, counter - 2);
                text.replace(beginningOfReplacing + 1, 1, std::to_string(counter));
                i = beginningOfReplacing + 1;
            }
            counter = 1;
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
    output.open("file.txt", std::ios::out);
    if (output.is_open()) {
        for (std::string::size_type i = 0; i < text.length(); i++) {
            beginningOfReplacing = i;
            toBeFound[0] = text[i];
            while (text[i] == toBeFound[0] && text[i + 1] == toBeFound[0] && i < text.length()) {
                counter++;
                i++;
                toBeFound[0] = text[i];
            }
            if (counter > 1) {
                text.erase(beginningOfReplacing + 1, counter - 2);
                text.replace(beginningOfReplacing + 1, 1, std::to_string(counter));
                i = beginningOfReplacing + 1;
            }
            counter = 1;
        }
        output << text;
    }
    output.close();
}