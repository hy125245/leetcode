/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_ptr = 0;
        int nums2_ptr = 0;
        if( n == 0 )
        {
            return;
        }
        if( m == 0 )
        {
            nums1 = nums2;
            return;
        }
        vector<int> result;
        while( nums1_ptr < m || nums2_ptr < n)
        {
            if( nums1_ptr == m)
            {
                result.push_back(nums2[nums2_ptr]);
                nums2_ptr+=1;
            }
            else if(nums2_ptr == n)
            {
                result.push_back(nums1[nums1_ptr]);
                nums1_ptr+=1;
            }
            else if(nums1[nums1_ptr] < nums2[nums2_ptr])
            {
                result.push_back(nums1[nums1_ptr]);
                nums1_ptr+=1;
            }
            else
            {
                result.push_back(nums2[nums2_ptr]);
                nums2_ptr+=1;
            }
        }
        nums1 = result;
    }
};
// @lc code=end

