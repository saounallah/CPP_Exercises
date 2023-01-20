#include <iostream>
#include <string.h>

int main()
{
    char chaine[20];
    std::cout << "what's your name \n"
              << std::endl;
    std::cin >> chaine;
    std::cout << "your name is " << chaine << std::endl;

    return 0;
}