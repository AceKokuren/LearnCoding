#include <iostream>
#include <vector>

void intro() 
{
    std::cout << "=========================\n";
    std::cout << " Welcome to tic tac toe!\n";
    std::cout << "=========================\n";
    std::cout << "Take it in turns to place\n";
    std::cout << "  a X or O on the board!\n";
    std::cout << "=========================\n" << std::endl;

}
void board() 
{
    std::cout << "        |       |      \n";
    std::cout << "        |       |      \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |      \n";
    std::cout << "        |       |      \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |      \n";
    std::cout << "        |       |      \n";
    std::cout << "        |       |      \n" << std::endl;
}