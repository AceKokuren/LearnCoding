#include <iostream>
#include <vector>
#include "main_functions.hpp"

int main() {
  
  bool play_again = true;

  while (play_again) {
    reset();
    player_turn();

    std::string y_n;
    std::cout << "Do you want to play again? Y/N\n";
    std::cin >> y_n;
    if (y_n == "Y" || y_n == "y") {
        play_again = true; 
    }
    else {
        play_again =false;
    }
  }
}