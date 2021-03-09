#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  int result = 1;
  for (int i = 0; i < 10; i++) {
    result = num * result;
  }
  return result;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
}