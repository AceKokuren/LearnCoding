#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam(30, "Sam Drakkila", "New York", "USA", "He/Him");
  sam.add_hobby("Listening to Music");
  sam.add_hobby("Watching Movies");
  sam.add_hobby("Clubbing");
  sam.add_hobby("Skateboarding");
  sam.add_hobby("Windsurfing");
  sam.add_hobby("Go Karting");
  std::cout << sam.view_profile() << std::endl;
}