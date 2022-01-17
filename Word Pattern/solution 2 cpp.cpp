

#include <map>

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words(pattern.length()+1);
        int j = 0;
        for (int i = 0; i<s.length(); i++) {
            if (s[i] != ' ') {
                words[j] += s[i];
            }
            
            else {
                j++;
            }
        }
        
        map<string, char>map1;
        map<char, string>map2;
        
        for (int i=0; i < words.size(); i++) {
            if (map1[words[i]] == 0 && map2[pattern[i]] == "") {
                map1[words[i]] = pattern[i];
                map2[pattern[i]] = words[i];
            }
            
            if (map1[words[i]] != pattern[i]) {
                return false;
            }
        }
        
        
        return true;
        
    }
};
