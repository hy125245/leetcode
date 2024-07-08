/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */
#include <iostream>
#include <string>
#include <stack>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * head =new ListNode();
        ListNode * tmp = head;
        if(nullptr == list1 && nullptr == list2)
            return nullptr;
        while( nullptr != list1 && nullptr != list2 )
        {
            if( list1 -> val <= list2 -> val )
            {
                tmp -> next = list1;
                list1 = list1 ->next;
            }
            else
            {
                tmp -> next = list2;
                list2 = list2 ->next;
            }
            tmp = tmp -> next;
        }
        while(nullptr != list1)
        {
            tmp -> next = list1;
            list1 = list1 ->next;
            tmp = tmp -> next;
        }
        while(nullptr != list2)
        {
            tmp -> next = list2;
            list2 = list2 ->next;
            tmp = tmp -> next;
        }
        return head -> next;
    }
};
// @lc code=end

