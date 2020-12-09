class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        nums = [y*y for y in nums] # square each element
        nums.sort() #sort list
        return nums
        