#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            if(stack.empty())
            stack.push(ch);
            else if(!stack.empty())
            {
                if(stack.top()==s[i]){
                    stack.pop();
                }
                else
                stack.push(s[i]);
            }
        }
        string res="";
        while(!stack.empty())
        {
        res+=stack.top();
        stack.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};