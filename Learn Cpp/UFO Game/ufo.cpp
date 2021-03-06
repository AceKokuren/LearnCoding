#include <iostream>
#include <vector>
#include <ctime>
#include "ufo_functions.hpp"


int main() {
    
    greet();
    bool play_again = true;

    while (play_again) {

     std::string codeword, answer;
     int misses = 0;
     std::vector<char> incorrect;
     bool guess = false;
     char letter;
     std::string yes_no;
    
     std::vector <std::string> gameval = solutions();
     codeword = gameval[0];
     answer = gameval[1];

     while (misses < 7 && answer != codeword) {
         std::cout << "\nPlease enter your guess: ";
         std::cin >> letter;
         
         for (int i = 0; i < codeword.length(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
          }   
          if (guess) {
             std::cout << "Correct, you are one letter closer to cracking the codeword\n";
             std::cout << "and saving the day!\n";
            }
         else {
             std::cout << "\nIncorrect! The tractor beam pulls your friend in further!\n";
             incorrect.push_back(letter);
             misses++;
            }
         display_misses(misses);
         std::cout << "\nIncorrect Guesses: ";
         display_status(incorrect, answer);
         guess = false;
        }

     end_game (codeword, answer);
     std::cout << "Do you want to play again?\n" << "y/n\n\n";
     std::cin >> yes_no;
     if (yes_no == "y") {
         play_again = true;
        }
     else {
         return 0;
        }
    } 
}
