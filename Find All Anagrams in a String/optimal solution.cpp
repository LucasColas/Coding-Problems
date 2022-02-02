/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
From Leetcode : https://leetcode.com/problems/find-all-anagrams-in-a-string/
*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> p_map,s_map;
        vector<int> anagrams;
        if (p.size()>s.size())return anagrams;
        
        for(int i=0;i<p.size();i++){
            p_map[p[i]] +=1;
            s_map[s[i]] +=1;
        }
        if(p_map==s_map) {
            anagrams.push_back(0);
        }
            
        for(int i=p.size();i<s.size();i++){
            
            s_map[s[i]] +=1;
            s_map[s[i-p.size()]] -=1;
            
            if(s_map[s[i-p.size()]] <= 0){
                s_map.erase(s[i-p.size()]);
            }
            
            if(p_map==s_map){
                anagrams.push_back(i-p.size()+1);
            }
        }
        
        return anagrams;
        
    }
        
        
};
