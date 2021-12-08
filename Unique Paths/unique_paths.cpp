#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>


class Solution {
public:
    int uniquePaths(int m, int n) {
      return findPaths(m, n);
    }
private:
  int findPaths(int m, int n) {

    int mat[m][n]; // create 2D array
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {

        if ((i == 0 ) || (j == 0)) {
          mat[i][j] = 1;
        } else {
          std::cout << "else" << std::endl;
          mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }

      }
    }

    return mat[m-1][n-1];
  }

};



int main() {
  Solution S;
  int Sol = S.uniquePaths(3,7);
  
  return 0;
}
