#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # HashMap solution (言うて辞書構造)
        # https://leetcode.com/problems/two-sum/solutions/1378064/c-java-python-hashmap-two-pointers-solutions-clean-concise/?orderBy=most_votes
        seen = {}
        for i, b in enumerate(nums):
            #a + b = target -> a = target - b
            a = target - b
            if a in seen:
                return[seen[a], i]
            seen[b] = i
# @lc code=end

