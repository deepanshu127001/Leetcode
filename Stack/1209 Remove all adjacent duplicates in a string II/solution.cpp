#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> myVector;
        for(char ch : s){
            if(myVector.size()==0 || myVector.back().first!=ch){
                myVector.push_back({ch,1});
            }
            else
            {
                myVector.back().second++;
            }
            if(myVector.back().second==k)
                myVector.pop_back();
        }
        string result="";
        for(auto val:myVector){
            result=result.append(val.second,val.first);
        }
        return result;
    }
};