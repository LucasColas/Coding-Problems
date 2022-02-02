/*

Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

From Leetcode : https://leetcode.com/problems/find-all-anagrams-in-a-string/

*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> phash(26,0);
        vector<int> anagrams;
        for (int i = 0; i < p.size(); i++) {
            phash[p[i]-'a']++;
        }
        
        
        for (int i = 0; i < s.size(); i++) {
            vector<int> shash(26,0);
            int j = i;
            int count = 0;
            while (j+count < s.size() && count < p.size()) {
                shash[s[j+count]-'a']++;
                count++;
            }
            
            if (phash == shash) {
                anagrams.push_back(i);
            }
        }
        
        return anagrams;
    }
};
