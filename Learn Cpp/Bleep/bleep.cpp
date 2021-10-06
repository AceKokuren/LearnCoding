#include <iostream>
#include <string> 
#include "functions.hpp"

int main() {
  std::string word = "broccoli";
  std::string text = "broccoli is good for you so make sure you eat your broccoli, otherwise you will suffer broccoli deficiency!\n";
   
  bleep(text, word);
  for (int i = 0; i < text.size(); i++) {
    std::cout << text[i];
  }
}