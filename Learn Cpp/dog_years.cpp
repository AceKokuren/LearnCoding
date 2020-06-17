#include <iostream>

int main() {

  //Declare variables for input
  int dog_age, early_years, later_years, human_years;
  std::string dog_name;

  std::cout << "Enter your dog's name: \n";
  std::cin >> dog_name;

  std::cout << "Enter dog's age: \n";
  std::cin >> dog_age;

  early_years = 21;
  later_years = (dog_age-2)*4;
  human_years = early_years+later_years;

  std::cout << "My name is " << dog_name << "!\n";
  std::cout << "I am " << human_years << " years old in human years!\n";
}