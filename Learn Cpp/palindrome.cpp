#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

std::vector <char> reversed_text;

  int total = 0;
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
  }
  for (int j = 0; j < text.size() - 1; j++) {
    if (text[j] == reversed_text[j]) {
      total++;
    }
  }
  if (total == reversed_text.size() - 1) {
    return true;
  }
  else {
    return false;
  }
}
int main() {
  
  std::cout << is_palindrome("madams") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelacel") << "\n";
}