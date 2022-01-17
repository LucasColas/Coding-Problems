/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

From Leetcode : https://leetcode.com/problems/word-pattern/

*/

#include <map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> Word_Pattern;
        string Word = "";
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] != ' ') {
                Word += s[i];
            }
            
            else {
                if (Word_Pattern.count(pattern[j]) > 0) {
                    if (Word_Pattern[pattern[j]] != Word) {
                        return false;
                    }
                }
                
                else {
                    Word_Pattern[pattern[j]] = Word;
                    Word = "";
                    if (j < pattern.length()) {
                        j++;
                    }
                }
               
            }
        }
        
        return true;
        
    }
};
