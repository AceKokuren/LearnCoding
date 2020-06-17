#include <iostream>
int main () {
  double weight, venus, mars, jupiter, saturn, uranus, neptune;
  int planet;
  double fight_weight;
  
  std::cout << "Enter your weight in kg: ";
  std::cin >> weight;

  std::cout << "Enter planet number to fight on: \n" << "1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n5. Uranus\n6. Neptune\n";
  std::cin >> planet;

  switch (planet) {
    case 1:
     fight_weight = weight * 0.78;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight on Venus.\n";
     break;
    case 2:
     fight_weight = weight * 0.39;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight on Mars.\n";
     break;
    case 3:
     fight_weight = weight * 2.65;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight on Jupiter.\n";
     break;
    case 4: 
     fight_weight = weight * 1.17;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight on Saturn\n";
     break;
    case 5:
     fight_weight = weight * 1.05;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight in Uranus.\n";
     break;
    case 6:
     fight_weight = weight * 1.23;
     std::cout << "You need to be: " << fight_weight << "kg on Earth to fight on Neptune\n";
     break;
    default:
     std::cout << "That is not a valid number!";
     break;
  }
}