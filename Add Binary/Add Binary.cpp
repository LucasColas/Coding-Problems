//Given two binary strings a and b, return their sum as a binary string.

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length();
        int j = b.length();
        string ans = "";
        string qtity = "0";
        int lbi = -1;
        string lb = "";
        
        
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
            i--;
            j--;       
            
        }
        
        if (j >= 0) {
            lbi = j;
            lb = b.substr(0,j+1); //first index and then the length
        }
        else if (i >= 0) {
            lbi = i;
            lb = a.substr(0, i+1);
        }
        
        while (lbi >= 0) {
            if (qtity == "1" && lb[lbi] == "1") {
                sum = "0" + sum;
            } 
            else if (qtity == "1" || lb[lbi] == "1") {
                sum = "1" + sum;
            }
            
            else {
                sum = lb[lbi]+sum;
            }
            
            lbi--;
            
        }
        
    }
};
