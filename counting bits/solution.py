class Solution:
    def countBits(self, n: int) -> List[int]:
        arr = []
        for i in range(n+1):
            i_b = int(bin(i)[2:])
            
            arr.append(self.calculate1(i_b))
            
        return arr
    
    def calculate1(self, i):
        count = 0
        while i >= 1:
            res = i%10
            if res == 1:
                count += 1
             
            i //= 10
            
        return count
