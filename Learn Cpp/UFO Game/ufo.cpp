#include <iostream>
#include <vector>
#include <ctime>
#include "ufo_functions.hpp"


int main() {
    greet();
    std::string codeword, answer;
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    // Creates a vector of random solutions, and creates _'s in answer = to codeword length
    std::vector<std::string> codewords{"chicken", "abduction", "cheese", "humans"};
    srand(time(NULL));
    int random = rand() % codewords.size();
    codeword = codewords[random];
    for (int i = 0; i < codeword.size(); i++) {
        answer += "_";
    }
    // Using to confirm a random choice and that _'s = to codeword
    std::cout << codeword << " " << answer;

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
        std::cout << "\nIncorrect Guesses ";
        display_status(incorrect, answer);
        guess = false;
    }

    end_game (codeword, answer);
}
