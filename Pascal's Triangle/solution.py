
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if (numRows == 1):
            return [[1]]
        
        Array = []
        
        for i in range(numRows):
            Array.append([1 for j in range(i+1)])

        if (numRows > 2):
            for i in range(2,numRows):
                for j in range(1,len(Array[i])-1):
                    Array[i][j] = Array[i-1][j-1]+Array[i-1][j]

        return Array
        
        
