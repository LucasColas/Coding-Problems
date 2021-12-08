#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>


class Solution {
public:
    int uniquePaths(int m, int n) {
      std::cout << "Yeah, uniquePaths" << std::endl;
      return findPaths(m, n);
    }
private:
  int findPaths(int m, int n) {
    std::cout << "findPaths" << std::endl;
    int mat[m][n]; // create 2D array
    for (int i = 0; i < m; i++) {
      std::cout << "inside for " << std::endl;
      for (int j = 0; i < n; j++) {
        std::cout << "inside nested for " << std::endl;
        if (i == 0 || j == 0) {
          mat[i][j] = 1;
        } else {
          mat[i][j] = mat[i-1][j] + mat[i][j-1];
        }
      }
    }
    std::cout << "I am going to return" << std::endl;

    return mat[m-1][n-1];
  }

};



int main() {
  Solution S;
  int Sol = S.uniquePaths(3,7);
  std::cout << "Hello";
  std::cout << Sol;
  return 0;
}
