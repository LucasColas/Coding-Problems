

//Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.
//A word is a maximal substring consisting of non-space characters only.

//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Length of Last Word.
//Memory Usage: 6.6 MB, less than 51.96% of C++ online submissions for Length of Last Word.

class Solution {
public:
    int lengthOfLastWord(string s) {
        string word= "";
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
};
