/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <iostream>
#include <string>
#include <stack>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s.length() % 2 != 0)
        {
            return false;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                stack.push('(');
            }
            else if (s[i] == '{')
            {
                stack.push('{');
            }
            else if (s[i] == '[')
            {
                stack.push('[');
            }
            if(stack.empty())
                return false;
            if(s[i] == ')')
            {
                if( stack.top() != '(' )
                    return false;
                stack.pop();
            }
            else if (s[i] == '}')
            {
                if( stack.top() != '{' )
                    return false;
                stack.pop();
            }
            else if (s[i] == ']')
            {
                if( stack.top() != '[' )
                    return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
// @lc code=end

