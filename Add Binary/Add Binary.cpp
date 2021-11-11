//Given two binary strings a and b, return their sum as a binary string.

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length();
        int j = b.length();
        string ans = "";
        string qtity = "0";
        
        while ((i >= 0 ) && (j >= 0)) {
            if (a[i] == "0" && b[j] == "0") {
                ans = "0" + ans;
                
            }
            
            else if (a[i] == "1"&& b[i] == "1") {
                if (qtity == "1") {
                    ans = "1" + ans;
                }
                
                else {
                   qtity = "1";
                    ans = "0" + ans;
                }
            }
            
            
        }
    }
};
