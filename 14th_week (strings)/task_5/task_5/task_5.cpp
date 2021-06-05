#include <iostream>
#include <string>
#include <fstream>

//5. Составить алгоритм, находящий, является ли частью данного слова слово “раз”. Ответ должен быть “да” или “нет”.

std::string word;
void menu();
bool containsRaz();
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
        std::getline(std::cin, word);
        if (containsRaz()) {
            std::cout << std::endl;
            std::cout << "---------------" << std::endl;
            std::cout << "Результат работы программы: слово раз - часть введенного слова";
        }
        else {
            std::cout << std::endl;
            std::cout << "---------------" << std::endl;
            std::cout << "Результат работы программы: слова раз нет в слове";
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

bool containsRaz () {
    size_t found = word.find("raz");        //std::string::find возвращает значение std::string::npos типа size_t при отсутствии искомого фрагмента
    if (found != std::string::npos) {
        return(true);
    }
    else {
        return (false);
    }
}

void textFileInput() {
    std::ifstream input;
    input.open("file.txt");
    if (input.is_open()) {
        std::getline(input, word); //записываем из файла input в переменную word;
    }
    input.close();
}

void textFileOutput() {
    std::ofstream output;
    output.open("file.txt", std::ios::app); //записываем в конец файла
    if (output.is_open()) {
        if (containsRaz()) {
            output << std::endl;
            output << "---------------" << std::endl;
            output << "Результат работы программы: слово раз - часть введенного слова";
        }
        else {
            output << std::endl;
            output << "---------------" << std::endl;
            output << "Результат работы программы: слова раз нет в слове";
        }
    }
    output.close();
}