/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        int mid;
        int result;
        while(left <= right)
        {
            mid = left + (right - left) / 2;
            if( (long long)mid * mid <= x )
            {
                result = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return result;
    }
};
// @lc code=end

