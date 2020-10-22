#include <iostream>
#include "ufo_functions.hpp"


int main() {
    greet();
    std::string codeword = "codecademy", answer = "_ _ _ _ _ _ _ _ _ _";
    int misses = 0;
    for (int i = 0; i < 8; i++) {
        display_misses(misses);
         misses++;
    if (misses == 7) {
        std::cout << "Game Over!\n";
        return 0;
   }
  }
}
