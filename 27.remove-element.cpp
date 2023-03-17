/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i=nums.begin(); i!=nums.end();) {
            if (*i==val) {
                nums.erase(i);
            } else {
                i++;
            }
        }
        return nums.size();
    }
};
// @lc code=end

