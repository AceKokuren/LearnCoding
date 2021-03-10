#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

std::vector <char> reversed_text;

  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
    
    for (int j = 0; j < reversed_text.size(); j++) {
      if (text[j] == reversed_text[j]) {
        return true;
      }
      else {
        return false;
      }
    } 
  }
  return 0;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}