#include <iostream>
#include <vector>
#include "main_functions.hpp"

int player = 1;
std::vector <std::string> turn{"1", "2", "3", "4", "5", "6", "7", "8", "9"};

void board() {
  std::cout << "\n       |       |       \n";
  std::cout << "   " << turn[0] << "   |   " << turn[1] << "   |   " << turn[2] << "   \n";
  std::cout << "_______|_______|_______\n";
  std::cout << "       |       |       \n";
  std::cout << "   " << turn[3] << "   |   " << turn[4] << "   |   " << turn[5] << "   \n";
  std::cout << "_______|_______|_______\n";
  std::cout << "       |       |       \n";
  std::cout << "   " << turn[6] << "   |   " << turn[7] << "   |   " << turn[8] << "   \n";
  std::cout << "       |       |       \n\n";
}

bool win() {

  if (turn[0] == turn[1] && turn[1] == turn[2]) {
    return true;
  }
  if (turn[3] == turn[4] && turn[4] == turn[5]) {
    return true;
  }
  if (turn[6] == turn[7] && turn[7] == turn[8]) {
    return true;
  }
  if (turn[0] == turn[3] && turn[3] == turn[6]) {
    return true;
  }
  if (turn[1] == turn[4] && turn[4] == turn[7]) {
    return true;
  }
  if (turn[2] == turn[5] && turn[5] == turn[8]) {
    return true;
  }
  if (turn[0] == turn[4] && turn[4] == turn[8]) {
    return true;
  }
  if (turn[2] == turn[4] && turn[4] == turn[6]) {
    return true;
  }
  return false;
}
  
void player_turn() {

  while (!win() && !filled()) {
    std::cout << "Player " << player << "'s turn!\n";
    std::cout << "Choose a number to play on the board: ";
    int input;
    std::cin >> input;
    
    while (turn[input - 1] == "X" || turn[input - 1] == "O") {
        std::cout << "There is already something there, please choose a different space: ";
        std::cin >> input;
    }
    if (player == 1) {
      turn[input - 1] = "X";
      board();
    }
    else if (player == 2) {
      turn[input - 1] = "O";
      board();
    }
    end();
    change_player();
  }
}

void change_player() {
    if (player == 1) {
        player++;
    }
    else if (player == 2) {
        player--;
    }
}
void end() {
  if (win()) {
    std::cout << "Congratulations Player " << player << ", you win!\n";
  }
}

bool filled() {
    for (int i = 0; i < turn.size(); i++) {
        if (turn[i] != "X" && turn[i] != "O") {
            return false;
        }
    }
    std::cout << "It'a a tie, better luck next time!\n";
    return true;
}
void reset() {

    for (int i = 0; i < turn.size(); i++) {
        switch (i) {
         case 0:
          turn[0] = "1";
          break;
         case 1:
          turn[1] = "2";
          break;
         case 2:
          turn[2] = "3";
          break;
         case 3:
          turn[3] = "4";
          break;
         case 4:
          turn[4] = "5";
          break;
         case 5:
          turn[5] = "6";
          break;
         case 6:
          turn[6] = "7";
          break;
         case 7:
          turn[7] = "8";
          break;
         case 8:
          turn[8] = "9";
          break;            
         default:
          break;
        }
    }
    player = 1;
    board();
}