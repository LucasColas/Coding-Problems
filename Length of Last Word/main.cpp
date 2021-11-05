#include <iostream>
//Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

//A word is a maximal substring consisting of non-space characters only.
//From Leetcode : https://leetcode.com/problems/length-of-last-word/

int LengthLastWord(std::string s) {
  std::string word = "";
  for (int i = 0; i < s.length(); i++) {
    if (i > 0 and s[i] != ' ' and s[i-1] == ' ') {
      word = s[i];

    }
    else if (s[i] != ' ') {
      word += s[i];
    } 
    
  }

  return word.length();

}

int main() {
  std::cout << "Hello World!\n";
  int L = LengthLastWord("test test");
  std::cout << L;
} 


