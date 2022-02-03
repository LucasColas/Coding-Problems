"""
Given four integer arrays nums1, nums2, nums3, and nums4 all of length n, return the number of tuples (i, j, k, l) such that:
-0 <= i, j, k, l < n
-nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
From Leetcode : https://leetcode.com/problems/4sum-ii/

"""

import collections

def fourSumCount(nums1, nums2, nums3, nums4):
  n, hashmap, result = len(nums1), collections.defaultdict(int), 0
  for i in range(n):
    for j in range(n):
      hashmap[nums1[i] + nums2[j]] += 1 
  
  print(hashmap)
  for k in range(n):
    for l in range(n):
      result += hashmap[0 - (nums3[k] + nums4[l])]
      print("hm value : ",hashmap[0 - (nums3[k] + nums4[l])])
      print("sum nums3 + nums4 : ",nums3[k] + nums4[l])
      
  return result

fourSumCount([1,2], [-2,-1], [-1,2], [0,2])
