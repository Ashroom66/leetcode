/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        // スタック利用
        stack<char> lbrackets;
        for (int i=0; i<s.length(); i++) {
            // 左括弧：push, 右括弧：状況に応じてretrun falseかpop
            if (s[i]=='(' || s[i]=='[' || s[i]=='{') {
                lbrackets.push(s[i]);
            } else {
                if(lbrackets.empty()) {return false;}
                char c = lbrackets.top();
                lbrackets.pop();
                if ((c=='(' && s[i]!=')') || (c=='[' && s[i]!=']') || (c=='{' && s[i]!='}')) {return false;}
            }
        }
        return lbrackets.empty();
    }
};
// @lc code=end

