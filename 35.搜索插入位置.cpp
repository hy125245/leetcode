/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        if( nums[right - 1] < target)
            return right;
        while(left < right)
        {
            if(nums[left] == target)
                return left;
            if(nums[right - 1] == target)
                return right - 1;
            if(nums[left] < target)
            {
                left += 1;
            }
            if(nums[right - 1] > target)
            {
                right -= 1;
            }
        }
        return left;
    }
};
// @lc code=end

