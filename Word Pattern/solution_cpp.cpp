/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

From Leetcode : https://leetcode.com/problems/word-pattern/

*/

#include <map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0;
        string word = "";
        int j = 0;
        //cout << s.length() << endl;
        map<char,string> word_map;
        while (i < s.length()) {
            
            if (s[i] != ' ') {
                word += s[i];
                cout << "in if " << word << endl;
            }
            
            
            
            if (i == (s.length()-1)) {
                //cout << "in else if" << word << endl;
                if (word_map.count(pattern[j]) > 0) {
                    if (word_map[pattern[j]] != word) {
                        return false;
                    }
                    else {
                        word = "";
                        j++;
                    }
                }
                
                else {
                    word_map[pattern[j]] = word;
                    word = "";
                    j++;
                    
                }
            }
            
            else {
                //cout << "in else " << word << endl;
                if (word_map.count(pattern[j]) > 0) {
                    if (word_map[pattern[j]] != word) {
                        return false;
                    }
                    else {
                        word = "";
                        j++;
                    }
                }
                else {
                    word_map[pattern[j]] = word;
                    word = "";
                    j++;
                    
                }
                
                
            }
            //cout << " i value " << i << endl;
            i++;
            
        }
        
        return true;
        
    }
};
