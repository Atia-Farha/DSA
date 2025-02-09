class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        unique = sorted(set(nums))

        k = len(unique)
        for i in range(k):
            nums[i] = unique[i]

        return k