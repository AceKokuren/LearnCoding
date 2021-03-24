#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam(30, "Sam Drakkila", "New York", "USA", "He/Him");
  Profile kat(28, "Kathrine Deitch", "Chicago", "USA", "She/Her");
  sam.add_hobby("Listening to Music");
  sam.add_hobby("Watching Movies");
  sam.add_hobby("Clubbing");
  sam.add_hobby("Skateboarding");
  sam.add_hobby("Windsurfing");
  sam.add_hobby("Go Karting");
  sam.add_hobby("Fishing");
  sam.add_hobby("Kayaking");
  sam.add_hobby("Reading");
  kat.add_hobby("Reading");
  kat.add_hobby("Playing Guitar");
  kat.add_hobby("Swimming");
  std::cout << sam.view_profile() << std::endl;
  std::cout << kat.view_profile() << std::endl;
}