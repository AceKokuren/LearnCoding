//Programme takes a year as an input and calculates whether it is a leap year or not
#include <iostream>

int main() {
  
  int y;

  std::cout << "Enter year: ";
  std::cin >> y;

  if (y < 1000 || y > 9999) {
    std::cout << "Invalid input!";
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    std::cout << y << " is a leap year!\n";
  }
  else {
    std::cout << "Is not a leap year!\n";
  }
}