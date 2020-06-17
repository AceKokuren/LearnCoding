#include <iostream>
#include <cmath>
int main () {
    float num, a, b;
    std::string op;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Choose an operator: \n+\n-\n*\n/\n";
    std::cin >> op;

    if (op == "+"){ 
        std::cout << a << " + " << b << " = " << a+b << std::endl;
    }
    else if (op == "-") {
        std::cout << a << " - " << b << " = " << a-b << std::endl;
    }
    else if (op == "*") {
        std::cout << a << " * " << b << " = " << a*b << std::endl;
    }
    else if (op == "/") {
        std::cout << a << " / " << b << " = " << a/b << std::endl;
    }
}