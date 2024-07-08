/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
#include <iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        for( int i = 0; i < nums.size() - 1; i++ ) 
        {
            for( int j = i + 1; j < nums.size(); j++ )
            {
                if( nums[i] + nums[j] == target )
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// @lc code=end

