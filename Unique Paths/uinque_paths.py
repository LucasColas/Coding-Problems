class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        grid = [[0 for i in range(n)] for j in range(m)]
        return self.findPaths(grid, 0, 0)
    
    def findPaths(self,grid, i,j):
        if i == len(grid[0])-1 and j==len(grid)-1:
            return 1
        
        elif i < len(grid[0])-1 and j < len(grid)-1:
            return self.findPaths(grid, i+1,j ) + self.findPaths(grid,i,j+1)
        
        elif j >= m-1:
            return self.findPaths(grid, i+1,j)
        
        elif i >= m-1:
            return self.findPaths(grid, i, j+1)
