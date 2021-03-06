#include <iostream>
#include <vector>
#include "main_functions.hpp"

int player = 1;
std::vector<std::string> position {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
std::vector<std::string> const_position {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

void intro() 
{
    std::cout << "=========================\n";
    std::cout << " Welcome to tic tac toe!\n";
    std::cout << "=========================\n";
    std::cout << "Take it in turns to place\n";
    std::cout << " an X or O on the board!\n";
    std::cout << "=========================\n";
    std::cout << " Press [Enter] to begin!" << std::endl;
    std::cin.ignore();
}
void board()
{
    std::cout << "        |       |       \n";
    std::cout << "    " << position[0] << "   |   " << position[1] << "   |   " << position[2] << "   \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |       \n";
    std::cout << "    " << position[3] << "   |   " << position[4] << "   |   " << position[5] << "   \n";
    std::cout << " _______|_______|_______\n";
    std::cout << "        |       |      \n";
    std::cout << "    " << position[6] << "   |   " << position[7] << "   |   " << position[8] << "  \n";
    std::cout << "        |       |      \n" << std::endl;
}
//Win conditions
bool win() 
{   
    bool is_winner = false;
    //Rows
    if ((position[0] == position[1]) && (position[1] == position[2]))
    {
        is_winner = true;
    }
    else if ((position[3] == position[4]) && (position[4] == position[5]))
    {
        is_winner = true;
    }
    else if ((position[6] == position[7]) && (position[7] == position[8]))
    {
        is_winner = true;
    }
    //Columns
    else if ((position[0] == position[3]) && (position[3] == position[6]))
    {
        is_winner = true;
    }
    else if ((position[1] == position[4]) && (position[4] == position[7]))
    {
        is_winner = true;
    }
    else if ((position[2] == position[5]) && (position[5] == position[8]))
    {
        is_winner = true;
    }
    //Diagonal
    else if ((position[0] == position[4]) && (position[4] == position[8]))
    {
        is_winner = true;
    }
    else if ((position[2] == position[4]) && (position[4] == position[6]))
    {
        is_winner = true;
    }    
    return is_winner;
}
void player_turn()
{
    while (!win() && !tie())
    {
        int play;
        std::cout << "Player " << player << "'s turn.\n";
        std::cout << "Please enter a number between 1 and 9: ";
        std::cin >> play;

        while (position[play-1] == "X" || position[play-1] == "O")
        {
            std::cout << "There is already something there, pick a different square: ";
            std::cin >> play;
        }

        if (player == 1)
        {
            position[play-1] = "X";
            board();
        }
        else if (player == 2)
        {
            position[play-1] = "O";
            board();
        }
        end_game();
        change_player();
    }
}
void end_game()
{
    if (win())
    {
        std::cout << "Congratulations Player " << player << "!" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if (tie())
    {
        std::cout << "There is no winner, tie!" << std::endl;
    }
}
void change_player()
{
    if (player == 1)
    {
        player++;
    }
    else
    {
        player--;
    }
}
void reset() 
{
    position = const_position;
    player = 1;
}
bool tie()
{
    bool draw = true;
    for (int i = 0; i < position.size(); i++)
    {
        if (position[i] != "X" && position[i] != "O")
        {
            draw = false;
        }
    }
    return draw;
}