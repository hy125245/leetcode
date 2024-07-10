/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int first = 0;
        int second = 0;
        int result = 1;
        while(n > 0)
        {
            first = second;
            second = result;
            result = first + second;
            n--;
        }
        return result;
    }
};
// @lc code=end

