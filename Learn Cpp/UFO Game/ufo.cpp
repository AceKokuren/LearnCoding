#include <iostream>
#include "ufo_functions.hpp"


int main() {
    greet();
    std::string codeword = "codecademy", answer = "_ _ _ _ _ _ _ _ _ _";
    int misses = 0;
    while (misses < 7 && answer != codeword) {
        display_misses(misses);
        misses++;
    }
    if (misses == 7) {
        std::cout << "Game Over!\n";
        return 0;
   }
   else if (answer == codeword) {
       std::cout << "Congratulations, you saved the day!\nVictory!" << std::endl; 
   }
   
}
