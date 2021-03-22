#include <iostream>
#include <fstream>

void processVolumes();
void outputHandling();

float result1;
float result2;
float result3;
int chosen_measurement = 0;

int main()
{
    processVolumes();
    outputHandling();
    return 0;
}

void processVolumes(){  //всё, что связано с вычислениями

    std::cout << "Choose a measurement: " << std::endl;
    std::cout << "1) Tea spoon" << std::endl;
    std::cout << "2) Regular spoon" << std::endl;
    std::cout << "3) Glass (300 ml)" << std::endl;
    std::cout << "Your choice: ";
    std::cin >> chosen_measurement;

    switch(chosen_measurement){
    case 1: //перевод из чайных ложек
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";

        float value;
        std::cin >> value;

        result2 = value / 2.75;
        result3 = value / 20;

        break;

    case 2: //перевод из столовых ложек
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";
        std::cin >> value;

        result1 = value * 2.75;
        result3 = value / 7.27;

        break;

   case 3: //перевод из стаканов (300 мл)
        std::cout << "    " << std::endl;
        std::cout << "Enter a value: ";
        std::cin >> value;

        result1 = value * 20;
        result2 = value * 7.27;

        break;

   default:  //неправильный ввод
        std::cout << "    " << std::endl;
        std::cout << "Wrong choice! Try again." << std::endl;
        break;

    }
}


void outputHandling(){  //всё, что связано с выводом результатов
    int output_choice = 0;
    std::cout << " " << std::endl;

    std::cout << "Choose an output method: " << std::endl;
    std::cout << "1) In console" << std::endl;
    std::cout << "2) In a *.txt file" << std::endl;
    std::cout << "Your choice: ";

    std::cin >> output_choice;

    switch (output_choice){
    default:    //неправильный ввод
         std::cout << "    " << std::endl;
         std::cout << "Wrong choice! Try again." << std::endl;
         break;

    case 1:         //если выводим в консоль
        std::cout << " " << std::endl;
        if (chosen_measurement == 1){
            std::cout << "This is " << result2 << " regular spoons" << std::endl;
            std::cout << "This is " << result3 << " glasses" << std::endl;
        } else if (chosen_measurement == 2){
            std::cout << "This is " << result1 << " tea spoons" << std::endl;
            std::cout << "This is " << result3 << " glasses" << std::endl;
        } else if (chosen_measurement == 3){
            std::cout << "This is " << result1 << " tea spoons" << std::endl;
            std::cout << "This is " << result2 << " regular spoons" << std::endl;
        }
    break;

    case 2:         //если выводим в файл рядом
        std::cout << " " << std::endl;
        std::ofstream outFile;
        outFile.open("result.txt");

        if (chosen_measurement == 1){
            outFile << "This is " << result2 << " regular spoons" << std::endl;
            outFile << "This is " << result3 << " glasses" << std::endl;
        } else if (chosen_measurement == 2){
            outFile << "This is " << result1 << " tea spoons" << std::endl;
            outFile << "This is " << result3 << " glasses" << std::endl;
        } else if (chosen_measurement == 3){
            outFile << "This is " << result1 << " tea spoons" << std::endl;
            outFile << "This is " << result2 << " regular spoons" << std::endl;
        }

        std::cout << "Check a result.txt file in a program directory" << std::endl;
        outFile.close();
    }
}
