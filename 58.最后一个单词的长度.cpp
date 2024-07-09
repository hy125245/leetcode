/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size() - 1;
        int count = 0;
        while(s[len] == ' ')
        {
            s[len] = '\0';
            len--;
            count++;
        }
        int pos = s.find_last_of(' ');
        return s.size() - pos - 1 - count;
    }
};
// @lc code=end

