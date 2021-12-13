class Solution {
public:
    int maxPower(string s) {
        int nb;
        int nb_max = 1;
        char prev;
        for (int i = 0; i < s.length(); i++)  {
            if (i == 0) {
                prev = s[i];
                nb = 1;
            }
            
            else {
                if (s[i] == prev) {
                    nb++;
                    if (nb >= nb_max) {
                        nb_max = nb;
                    }
                }
                else {
                    prev = s[i];
                    nb = 1;
                }
            }
        }
        
        return nb_max;
        
    }
};
