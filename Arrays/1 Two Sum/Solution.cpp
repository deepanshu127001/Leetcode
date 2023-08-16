#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    //target =9;
    map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        int remaining = target - nums[i]; // 9-2

        if(mp.find(remaining)!=mp.end()){
            return {mp[remaining],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
int main(int argc, char const *argv[])
{
    vector<int> vec{2,7,11,15};
    vector<int> ans=twoSum(vec,9);
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}
