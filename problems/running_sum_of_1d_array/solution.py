class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        lstSum = 0
        for i,_ in enumerate(nums):
            lstSum += nums[i]
            nums[i] = lstSum
        return nums