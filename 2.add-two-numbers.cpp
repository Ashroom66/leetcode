/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start

// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode; // dummyHead
        ListNode* p = result;
        int margin = 0;
        while(l1!=nullptr || l2!=nullptr) {
            int v1 = 0, v2 = 0;
            if (l1!=nullptr) {v1=l1->val;}
            if (l2!=nullptr) {v2=l2->val;}
            p->next = new ListNode((v1+v2 + margin) % 10);
            p = p->next;
            margin = (v1+v2+margin)/10;

            if(l1 != nullptr) {l1=l1->next;}
            if(l2 != nullptr) {l2=l2->next;}
        }
        if (margin>0) {p->next = new ListNode(margin);}
        return result->next;
    }
};
// @lc code=end

