//Programme to make rock paper scissors lizard spock
/*This programme is designed to resolve decisions between 2 people who can't agree, but whereas rock, paper, scissors leads to too many ties, well rock, paper, scissors, lizard, spock is designed to reduce ties by adding additional choices*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  srand(time(NULL));
  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "\nRock, Paper, Scissors Shoot!\n";
  std::cout << "\n1) Rock\n2) Paper\n3) Scissors\n\n";
  std::cin >> user;

  if (user == 1 && computer == 1 || user == 2 && computer == 2 || user == 3 && computer == 3) {
    std::cout << "\nYou draw!\n\n";
  } 
  else if (user == 1 && computer == 3) {
    std::cout << "\nRock crushes scissors, you win!\n\n";
  }
  else if (user == 2 && computer == 1) {
    std::cout << "\nPaper covers rock, you win\n\n";
  }
  else if (user == 3 && computer == 2) {
    std::cout << "\nScissors cuts paper, you win!\n\n";
  }
  else if (user == 1 && computer == 2) {
      std::cout << "\nPaper covers rock, you lose\n\n";
  }
  else if (user == 2 && computer == 3) {
      std::cout << "\nScissors cuts paper, you lose!";
  }
  else if (user == 3 && computer == 1) {
      std::cout << "\nRock crushes scissors, you lose!\n\n";
  }
  else {
      std::cout << "\nInvalid input!\n\n";
  }
}