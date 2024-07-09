/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        int res = 1;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] != nums[i + 1])
            {
                result.push_back(nums[i + 1]);
                res += 1;
            }
        }
        nums = result;
        return res;
    }
};
// @lc code=end

