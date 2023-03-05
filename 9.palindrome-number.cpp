/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {return false;}
        vector<int> numbers = {};
        for(;x!=0;x=x/10) {numbers.push_back(x%10);}
        int tailIdx = numbers.size()-1;
        for(int i=0; i<numbers.size(); i++) {
            if (numbers[i]!=numbers[tailIdx-i]) {return false;}
        }
        return true;
    }
};
// @lc code=end

