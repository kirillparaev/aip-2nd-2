#include <iostream>

int begin, end, dx;
void counting (int begin,int end,int dx);

int main()
{
    std::cout << "Enter begin, end and dx (use space): ";
    std::cin >> begin >> end >> dx;
    counting(begin, end, dx);
    return 0;
}

void counting (int begin,int end,int dx){
    while (end >= begin) {
        std::cout << begin << "  ";
        begin = begin + dx;
    }
    std::cout<<std::endl;
}
