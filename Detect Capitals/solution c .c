/*
We define the usage of capitals in a word to be right when one of the following cases holds:
    All letters in this word are capitals, like "USA".
    All letters in this word are not capitals, like "leetcode".
    Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.
Source : https://leetcode.com/problems/detect-capital/
*/

bool detectCapitalUse(char * word){
    size_t lenWord = strlen(word);
    
    for (int i = 0; i < lenWord; i++) {
        if ((word[i] >= 'A' && word[i] <= 'Z') && (i > 0) && (word[i-1] >= 'a' && word[i-1] <= 'z' )) {
            return false;
        }
        
        if ((word[i] >= 'A' && word[i] <= 'Z') && (i < strlen(word) && i > 0) && (word[i+1] >= 'a' && word[i+1] <= 'z' )) {
            return false;
        }
        
    }
    
    return true;

}
