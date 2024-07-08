/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int num = strs.size();
        string str = strs[0];
        if(num == 1)
        {
             return str;
        }
        for(int i = 0; i < str.length(); i++)
        {
            for(int j = 1; j < num; j++)
            {
                if(i == str.length() || str[i] != strs[j][i])
                {
                    return str.substr(0, i);
                }
            }
        }
        return str;
    }
};
// @lc code=end

