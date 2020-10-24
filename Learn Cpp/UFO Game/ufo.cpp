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
    end_game (codeword, answer);
}
