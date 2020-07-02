#include <iostream>

int main() {

  std::cout << "Welcome adventurer!\n";
  std::cout << "You have been requested by the King to deliver a message to the town of Bangrey\n";
  std::cout << "Press any key then enter to continue... \n";
  std::string enter;
  std::cin >> enter;

  std::cout << "\nYou make your way out of town and come to a fork in the road!\n";
  std::cout << "One leads down the main path but is likely to make you late for your deadline!\n";
  std::cout << "The other is a shortcut that will get you to Bangrey on time, but many dangers lurk down this path!\n";
  std::cout << "Do you go: \n1) Left, down the main road\n2) Right, down the shortcut\n";
  
  std::string fork;
  std::cin >> fork;


  while (fork != "right" && fork != "left" && fork != "Right" && fork != "Left") {
    std::cout << "\nPlease enter left or right only\n";
    std::cin >> fork;
  }
  if (fork == "Left" || fork == "left") {
    std::cout << "You start heading down the main road!\n";
  }
  else if (fork == "Right" || fork == "right") {
    std::cout << "You go right, down the forest path!\n";
  }
}
