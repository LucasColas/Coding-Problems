class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return false;
        }
        
        if (matrix.size() == 1 && matrix[0].size() == 1) {
            if (matrix[0][0] == target) {
                return true;
            }
            return false;
        }
        
        
        int i;
        for (i = 0; i < matrix.size(); i++) {
            //cout << "i : " << i << endl;
            //cout << "matrix[i].size()-1 " << matrix[i].size()-1 << endl;
            if ((matrix[i][0] <= target) && (matrix[i][matrix[i].size()-1] >= target)) {
                break; //we found in which our target could possibly be
            } 
        }
        
        if (i >= matrix.size()) {
            i = matrix.size()-1;
        }

        
        int l = 0;
        int r = matrix[i].size()-1;
        int m;
        //cout << r << endl;
        //cout << "valeur de i" << i << endl;
        
        while (l < r) {
            m = (l+r)/2;
            if (target <= matrix[i][m]) {
                r = m;
            }
            
            else {
                l = m+1;
            }
        }
        
        if (matrix[i][l] == target) {
            return true;
        }
        
        return false;
    }
};
