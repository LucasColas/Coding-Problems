

class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        
        mini, result = abs(arr[1] - arr[0]), [arr[0:2]]
        
        for i in range(2, len(arr)):
            diff = abs(arr[i] - arr[i - 1])

            if diff < mini:
                mini, result = diff, list()
                
            result.append([arr[i - 1], arr[i]])
                
        return result
        
        
