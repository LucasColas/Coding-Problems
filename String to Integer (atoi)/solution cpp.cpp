

class Solution {
public:
    int myAtoi(string s) {
        
        if (s.length() == 0) {
            return 0;
        }
        int i = 0;
        int res = 0;
        
        while(i < s.size() && s[i] == ' ') {
            i++;
        }
        
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
        }
        
        while(i<s.length() && (s[i]>='0' && s[i]<='9'))
        {
            int digit=(s[i]-'0')*sign;
            
            if (sign == 1 && (res > INT_MAX/10 || (res == INT_MAX/10 && digit > INT_MAX % 10))) {
                return INT_MAX;  
                
            } 
            if (sign == -1 && (res < INT_MIN/10 || (res == INT_MIN/10 && digit < INT_MIN % 10))) {
                return INT_MIN;
            }
            
            res = res * 10 + digit;
            i++;
        }
        
        return res;

            
    }
};
