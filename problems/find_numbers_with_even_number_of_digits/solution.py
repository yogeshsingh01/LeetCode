class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        max1 = 0
        for i in nums:
            count = 0
            while(i):
                i = i // 10
                count += 1
            if not (count % 2):
                max1 += 1
        return max1
                
        