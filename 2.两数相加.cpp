/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

#include <iostream>
#include <list>
using namespace std;
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
        ListNode *result = nullptr;
        ListNode *tmp = nullptr;
        int carry = 0;
        int res = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            res = x + y + carry;
            carry = res / 10;
            res %= 10;
            if(result == nullptr)
            {
                result = new ListNode(res);
                tmp = result;
            }
            else
            {
                tmp -> next = new ListNode(res);
                tmp = tmp -> next;
            }
            if(l1 != nullptr)
                l1 = l1 -> next;
            if(l2 != nullptr)
                l2 = l2 -> next;
        }
        if(carry > 0)
        {
            tmp -> next = new ListNode(1);
        }
        return result;
    }
};
// @lc code=end

