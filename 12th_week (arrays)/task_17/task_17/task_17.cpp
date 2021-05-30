#include <iostream>
#include <vector>
#include <string>

void userInput();
void findExcellentStudents();
void findNotSoExcellentStudents();
void averageOfGrades();
int usersChoice();

struct Student {
    int mathsGrade, physicsGrade, infGrade;         //что есть студент
};

std::vector<Student> student(30);                   //сколько их
std::vector<std::string> surname(30);               //фамилии хранятся в отельном векторе, номера студентов соответствуют номерам их фамилий
bool isFirstTime = true;                            //индикатор начала работы
bool nextStudentexists = true;                      //вводим ли мы следующего студента? изначально да
int studentsPosition = 0;        //номер просматриваемого студента в массиве
int studentsAmount = 0;          //сколько их было внесено в принципе (нумерация везде с нуля, просто надо запомнить сколько их если запрашиваем несколько действий

int main() {
    usersChoice();
    return(0);
}

void userInput() {
    while (nextStudentexists) {     //пока хотим вводить - вводим
        std::cout << "Enter student's surname: ";
        std::cin >> surname[studentsPosition];

        surname.push_back(surname[studentsPosition]);

        std::cout << "Enter student's maths grade: ";
        std::cin >> student[studentsPosition].mathsGrade;

        std::cout << "Enter student's informatics grade: ";
        std::cin >> student[studentsPosition].infGrade;

        std::cout << "Enter student's physics grade: ";
        std::cin >> student[studentsPosition].physicsGrade;

        student.push_back(student[studentsPosition]);

        std::cout << "Enter 0 if this was the last student, 1 if there are another one to input: ";
        std::cin >> nextStudentexists;

        if (nextStudentexists) {
            studentsPosition++;
            studentsAmount++;
        }
    }
}

void findExcellentStudents() {
    int studentsPosition = 0;           //везде начинаем просматривать массив сначала, хотя можно было сделать проверку на соответствие сразу же после ввода
    int amountOfExcellentStudents = 0;
    std::cout << "Excellent students are : " << std::endl;

    while (studentsPosition <= studentsAmount) {     //
        if (student[studentsPosition].infGrade == 5 && student[studentsPosition].mathsGrade == 5 && student[studentsPosition].physicsGrade == 5) {
            std::cout << surname[studentsPosition] << std::endl;
            amountOfExcellentStudents++;
        }
        studentsPosition++;
    }

    if (amountOfExcellentStudents == 0) {
        std::cout << "Unfortunately, there were no excellent students." << std::endl;
    }
    else {
        std::cout << "Amount of excellent students: " << amountOfExcellentStudents << std::endl;
    }
    std::cout << "                " << std::endl;
    usersChoice();
}

void findNotSoExcellentStudents() {
    int studentsPosition = 0;
    int amountOfNotSoExcellentStudents = 0;
    std::cout << "Not so excellent students are : " << std::endl;

    while (studentsPosition <= studentsAmount) {
        if (student[studentsPosition].infGrade == 2 || student[studentsPosition].mathsGrade == 2 || student[studentsPosition].physicsGrade == 2) {
            std::cout << surname[studentsPosition] << std::endl;
            amountOfNotSoExcellentStudents++;
        }
        studentsPosition++;
    }

    if (amountOfNotSoExcellentStudents == 0) {
        std::cout << "Fortunately, there were no not so excellent students." << std::endl;
    }
    else {
        std::cout << "Amount of not so excellent students: " << amountOfNotSoExcellentStudents << std::endl;
    }
    std::cout << "                " << std::endl;
    usersChoice();
}

void averageOfGrades() {
    int studentsPosition = 0;
    float infAverageGrade = 0;
    float mathAverageGrade = 0;
    float physicsAverageGrade = 0;

    while (studentsPosition <= studentsAmount) {
        infAverageGrade = infAverageGrade + student[studentsPosition].infGrade;
        mathAverageGrade = mathAverageGrade + student[studentsPosition].mathsGrade;
        physicsAverageGrade = physicsAverageGrade + student[studentsPosition].physicsGrade;
        studentsPosition++;
    }

    infAverageGrade = infAverageGrade / studentsPosition;
    mathAverageGrade = mathAverageGrade / studentsPosition;
    physicsAverageGrade = physicsAverageGrade / studentsPosition;

    std::cout << "Informatics average grade: " << infAverageGrade << std::endl;
    std::cout << "Maths average grade: " << mathAverageGrade << std::endl;
    std::cout << "Physics average grade: " << physicsAverageGrade << std::endl;
    std::cout << "  " << std::endl;
    usersChoice();
}

int usersChoice() {
    if (isFirstTime) {
        userInput();            //при запуске для начала спрашиваем данные студентов по очереди
        isFirstTime = false;
    }

    int userChoice = 0;
    std::cout << "What you want to do?" << std::endl;
    std::cout << "1) Get list of all excellent students" << std::endl;
    std::cout << "2) Get list of all not so excellent students" << std::endl;
    std::cout << "3) Get average scores of all subjects" << std::endl;
    std::cout << "4) Exit" << std::endl;
    std::cout << "Your choice >> ";
    std::cin >> userChoice;

    switch (userChoice) {
    case (1):
        findExcellentStudents();
        break;
    case(2):
        findNotSoExcellentStudents();
        break;
    case (3):
        averageOfGrades();
        break;
    case(4):
        return(0);
        break;
    default:
        std::cout << "Wrong input!";
        std::cout << "                " << std::endl;
        usersChoice();
        break;
    }
    return(0);
}