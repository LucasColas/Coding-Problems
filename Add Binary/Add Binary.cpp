//Given two binary strings a and b, return their sum as a binary string.
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans = "";
        char qtity = '0';
        
        
        while (i >= 0 && j >= 0) {
            //std:: cout << a[i];
            //std:: cout << b[j];
            if (a[i] == '1' && b[j] == '1') {
                if (qtity == '0') {
                    ans = ans + '0';
                    qtity = '1';
                } 
                else {
                    ans += '1';
                    qtity = '1';
                }    
            }
            
            else if (a[i] == '0' && b[i] == '0') {
                if (qtity == '0') {
                    ans = ans + '0';
                    qtity = '0';
                }
                
                else {
                    qtity = '0';
                    ans = ans + '1';
                }
            }
            
            else {
                if (qtity == '0') {
                    ans = ans + '1';
                    qtity = '0';
                    
                }
                
                else {
                    qtity = '1';
                    ans = ans + '0';     
                }
                    
                
            }
                
            i--;
            j--;       
            
        }
        
        while (i >= 0) {
            if (a[i] == '1' && qtity == '0') {
                ans = ans + '1';
                qtity = '0';
            }
            
            else if (a[i] == '1' && qtity == '1') {
                ans += '0';
                qtity = '1';
                
            }
            
            else if (a[i] == '0' && qtity == '0') {
                ans += '0';
                qtity = '0';
            }
            
            else if (a[i] == '0' && qtity == '1') {
                ans += '1';
                qtity = '0';
            }
            
            i--;
                        
        }
        
        while (j >= 0) {
            if (b[j] == '1' && qtity == '0') {
                ans = ans + '1';
                qtity = '0';
            }
            
            else if (b[j] == '1' && qtity == '1') {
                ans += '0';
                qtity = '1';
                
            }
            
            else if (b[j] == '0' && qtity == '0') {
                ans += '0';
                qtity = '0';
            }
            
            else if (b[j] == '0' && qtity == '1') {
                ans += '1';
                qtity = '0';
            }
            
            j--;
                        
        }
        
        if (qtity == '1') {
            ans += '1';
        }
        
        reverse(ans.begin(), ans.end());
            
        return ans;
    }
};
