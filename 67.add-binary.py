#
# @lc app=leetcode id=67 lang=python
#
# [67] Add Binary
#

# @lc code=start
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        arev = a[::-1]
        brev = b[::-1]
        res = ""
        i = 0
        j = 0
        carry = 0
        while (i<len(a) or j<len(b) or carry):
            acalc = int(arev[i]) if i<len(a) else 0
            bcalc = int(brev[j]) if j<len(b) else 0
            re = acalc + bcalc + carry
            carry = 1 if re>=2 else 0
            re = re-2 if re>=2 else re
            res = str(re)+res
            i+=1
            j+=1
        return res
        
# @lc code=end

