/*

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) 
of the characters without disturbing the relative positions of the remaining characters. 
(i.e., "ace" is a subsequence of "abcde" while "aec" is not).

From Leetcode : https://leetcode.com/problems/is-subsequence/

/*

bool isSubsequence(char * s, char * t){
    if (strlen(s) == 0 && strlen(t) == 0) {
        return true;
    }
    
    if (strlen(s) == 0) {
        return true;
    }
    
    int id_s = 0;
    int id_ = 0;
    
    while (t[id_] != '\0') {
        if (s[id_s] == t[id_]) {
            id_s++;
            
        }
        
        if (s[id_s] == '\0') {
            return true;
        }
        
        id_++;
    }
    
    return false;
}
