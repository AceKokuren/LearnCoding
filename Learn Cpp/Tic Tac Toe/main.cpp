#include <iostream>
#include <vector>
#include "main_functions.hpp"

int main () 
{
    bool play_again = true;
    intro();
    while (play_again)
    {
        reset();
        board();
        player_turn();
        std::cout << "Do you want to play again? y/n\n";
        char y_n;
        std::cin >> y_n;
        if (y_n == 'y')
        {
            play_again = true;
        }
        else
        {
            play_again = false;
        }
    }
}