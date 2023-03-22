#
# @lc app=leetcode id=66 lang=python
#
# [66] Plus One
#

# @lc code=start
class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        # 2桁許す
        digits[-1] += 1
        # 逆順に走査
        ans = []
        carry = 0
        for num in reversed(digits):
            ans.append(num+carry)
            carry = ans[-1]/10
            ans[-1] = 0 if carry else ans[-1]
        if carry:
            ans.append(1)
        return reversed(ans)
            
# @lc code=end

