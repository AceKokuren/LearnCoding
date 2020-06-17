#include <iostream>
int main () {
	std::string out;
	std::cout << "Who are you?\n";
	std::getline (std::cin, out);
	std::cout << "You are " << out << "\n";
}
