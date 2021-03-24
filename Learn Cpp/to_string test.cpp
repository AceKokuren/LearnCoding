#include <iostream>
#include <string>

std::string convert(int i) {
    
    std::string num = std::to_string(i);
    return num;
}

int main() {
    int in;
    std::cout << "Enter number to convert to string: ";
    std::cin >> in;
    std::cout << convert(in) << std::endl;
}