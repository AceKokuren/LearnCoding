//Can also be done using if and else if statements

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    //Variable to allow for a user input
    std::string question;
    
    std::cout << "Magic 8 ball: ";
    //Question from user
    std::cin >> question;
    //Random seed generator
    srand(time(NULL));
    int answer = std::rand() % 10;
    std::cout << "\n";

    switch (answer) {
     case 1:
      std::cout << "More than likely!\n";
      break;
     case 2:
      std::cout << "Outcome is probable\n";
      break;
     case 3:
      std::cout << "Don't be so hopeful\n";
      break;
     case 4: 
      std::cout << "Impossible\n";
      break;
     case 5:
      std::cout << "Try Again\n";
      break;
     case 7:
      std::cout << "Hmm, unknown\n";
      break; 
     case 8:
      std::cout << "It appears so\n";
      break;
     case 9:
      std::cout << "I reckon so";
      break;  
     default:
      std::cout << "Unlikely\n";
      break;
   }
}