/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include <climits>
class Solution {
public:
    int reverse(int x) 
    {
        int result = 0;
        while( x != 0 )
        {
            if(result > INT_MAX / 10 || result < INT_MIN /10 )
            {
                return 0;
            }
            int tmp = x % 10;
            x = x / 10;
            result = result * 10 + tmp;
        }
        return result;
    }
};
// @lc code=end

