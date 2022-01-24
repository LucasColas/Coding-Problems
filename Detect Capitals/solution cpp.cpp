
class Solution {
public:
    bool detectCapitalUse(string word) {
        int lenWord = word.size();
    
    for (int i = 0; i < lenWord; i++) {
        if ((word[i] >= 'A' && word[i] <= 'Z') && (i > 0) && (word[i-1] >= 'a' && word[i-1] <= 'z' )) {
            return false;
        }
        
        if ((word[i] >= 'A' && word[i] <= 'Z') && (i < word.size() && i > 0) && (word[i+1] >= 'a' && word[i+1] <= 'z' )) {
            return false;
        }
        
    }
    
    return true;
        
    }
};
