/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int size = max(a.size(), b.size());
        for(int i = 0; i < size; i++)
        {
            carry += i < a.size() ? (a.at(i) == '1') : 0;
            carry += i < b.size() ? (b.at(i) == '1') : 0;
            result.push_back( (carry % 2) ? '1' : '0' );
            carry = carry / 2;
        }
        if(carry > 0)
            result.push_back('1');
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

