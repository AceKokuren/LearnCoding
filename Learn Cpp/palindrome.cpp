#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

std::vector <char> reversed_text;

  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
  }
  for (int j = 0; j < text.size(); j++) {
    if (text[j] != reversed_text[j]) {
      std::cout << text << " is not a palindrome!\n";
      return false;
    }
  }
  std::cout << text << " is a palindrome!\n";
  return true;
}
int main() {
  
  bool another = true;
  std::string input;

  while (another) {
    std::cout << "Enter word to check for palindrome: ";
    std::cin >> input;
    is_palindrome(input);
  }

  /*std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";*/
}