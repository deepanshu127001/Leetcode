#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    void solve(int opn,int cl,string op,vector<string>&s){
        if(opn==0 && cl==0){
            s.push_back(op);
            return;
        }
    

        
            string op1=op;
            string op2=op;
        if(opn!=0){
            op1.push_back('(');
            solve(opn-1,cl,op1,s);
        }
        if(opn<cl){
            op2.push_back(')');
            solve(opn,cl-1,op2,s);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string op="";
        vector<string> result;
        solve(open,close,op,result);
        return result;
    }
};