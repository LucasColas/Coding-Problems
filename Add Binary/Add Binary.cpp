//Given two binary strings a and b, return their sum as a binary string.
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans = "";
        char qtity = '0';
        int lbi = -1;
        string lb = "";
        
        
        while ((i >= 0 ) && (j >= 0)) {
            if (a[i] == '0' && b[j] == '0') {
                ans = ans + '0';
                
            }
            
            else if (a[i] == '1' && b[i] == '1') {
                if (qtity == '1') {
                    ans = ans + '1';
                }
                
                else {
                    qtity = '1';
                    ans = ans + '0';
                }
            }
            
            else if (a[i] == '1' || b[j] == '1') {
                if (qtity == '1') {
                    ans = ans + '0';
                    qtity = '1';
                    
                }
                
                else {
                    qtity = '1';
                    ans = ans + '1';     
                }
                    
                
            }
                
            i--;
            j--;       
            
        }
        
        if (j >= 0) {
            lbi = j;
            lb = b.substr(0,j+1); //first :  index and then the length
        }
        
        else if (i >= 0) {
            lbi = i;
            lb = a.substr(0, i+1);
        }
        
        while (lbi >= 0) {
            if (qtity == '1' && lb[lbi] == '1') {
                ans = ans + '0';
            }
            
            else if (lb[lbi] == '1') {
                if (qtity == '1') {
                    ans = + ans + '0';
                }
                
                else {
                    ans = ans + '1';
                }
                
            }
            
            else {
                if (qtity == '1') {
                    ans = ans + '1';
                    qtity == '0';
                }
                
                else {
                    ans = lb[lbi] + ans;
                }
            }
                    
            lbi--;            
        }
            
        return ans;
    }
};
