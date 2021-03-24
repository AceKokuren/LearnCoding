#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "functions.hpp"

std::vector <int> board;

std::vector <int> random_number() {
    int num;
    srand(time(NULL));

    for (int i = 0; i < 81; i++) {
        num = rand() % 10;
        board.push_back(num);
    }
    for (int i =0; i < board.size(); i++) {
        std::cout << 
    }
    return board;
}

void grid() {

    std::cout << " _____________________________________\n";
    
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    
    std::cout << "|---|---|---||---|---|---||---|---|---|\n";

    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";

    std::cout << "|---|---|---||---|---|---||---|---|---|\n";

    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";
    std::cout << "| " << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " || ";
    std::cout << random_number()[0] << " | " << random_number()[0] << " | " << random_number()[0] << " | \n";

    std::cout << " -------------------------------------\n\n";
}