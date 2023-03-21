#
# @lc app=leetcode id=58 lang=python3
#
# [58] Length of Last Word
#

# @lc code=start
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        c = 0
        t = 0
        for i in s:
            if i==' ':
                c = t if t>0 else c
                t = 0
            else:
                t+=1
        c = t if t>0 else c
        return c
        
# @lc code=end

