#include <iostream>

int main() {
    
    std::string fork; 
    std::cout << "You come to a fork in the road!\n";
    std::cout << "Do you go left or right?\n";
    std::cin >> fork;

    if (fork == "right" || fork == "Right") {
        std::cout << "You go right!\n";
        std::cout << "A tree stops you in your path.\n";
        std::cout << "Do you: \n";
        std::cout << "Chop the tree down\n";
        std::cout << "Turn around\n";
        
        std::string tree;
        std::cin >> tree;

            while (tree == "Chop" || tree == "chop") {
                std::cout << "You don't have the necessary tools.\n";
                std::cout << "Do you wish to turn around?\n";
                std::cout << "Y\nN\n\n";
                std::cin >> tree;
            }
    }
    else if (fork == "Left" || fork == "left") { 
        std::cout << "You go left.\n";
    }
    else {
        
    }
}