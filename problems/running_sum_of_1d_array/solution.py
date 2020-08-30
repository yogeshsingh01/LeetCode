class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum = 0
        for i in range(0,len(nums)):
            sum += nums[i]
            nums[i] = sum
        return nums