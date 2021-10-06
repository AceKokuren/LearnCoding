#include <iostream>
#include <string> 
#include "functions.hpp"

void bleep (std::string &text, std::string word) {
  for (int i = 0; i < text.size(); i++) {
    int match = 0;
    for (int j = 0; j < word.size(); j++) {
      if (text[i] == word[j]) {
        ++match;
      }
    }
    if (match == word.size()) {
      convert(word, text, i);
    }
  }
}

void convert(std::string word, std::string &text, int i) {
  
  for (int k = 0; k < word.size(); k++) {
    text[i+k] = '*';
  }
}