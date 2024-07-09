/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        digits[size] = digits[size] + 1;
        while(size > 0 && digits[size] / 10 > 0)
        {
            digits[size] = digits[size] % 10;
            digits[size - 1] = digits[size - 1] + 1;
            size -= 1;
        }
        if(digits[0] >= 10)
        {
            digits[0] = digits[0] % 10;
            digits.emplace(digits.begin(), 1);
        }
        return digits;
    }
};
// @lc code=end

