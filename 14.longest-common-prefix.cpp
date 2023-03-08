/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        for (int i=0; i<200; i++) {
            for (int j=0; j<strs.size(); j++) {
                if (strs[j][i]==NULL) {return pref;}
                if (strs[j][i]!=strs[0][i]) {return pref;}
            }
            pref+=strs[0][i];
            // pref += to_string(i);
        }
        return pref;
    }
};
// @lc code=end

