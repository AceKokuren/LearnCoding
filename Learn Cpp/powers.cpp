#include <iostream>
#include <cmath>

int main() {
    double power; 
    double square;

    std::cout << "Enter a number to find it's square: ";
    std::cin >> power;

    square = pow (power, 2); 
    std::cout << "The square of " << power << " = " << square << "\n";
}