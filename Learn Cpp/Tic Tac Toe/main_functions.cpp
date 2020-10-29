#include <iostream>
#include <vector>

void intro() 
{
    std::cout << "=========================\n";
    std::cout << " Welcome to tic tac toe!\n";
    std::cout << "=========================\n";
    std::cout << "Take it in turns to place\n";
    std::cout << " an X or O on the board!\n";
    std::cout << "=========================\n";
    std::cout << " Press [Enter] to begin!" << std::endl;
    std::cin.ignore();
    std::cout << "        |       |       \n";
    std::cout << "    1   |   2   |   3   \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |       \n";
    std::cout << "    4   |   5   |   6   \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |      \n";
    std::cout << "    7   |   8   |   9  \n";
    std::cout << "        |       |      \n" << std::endl;
}