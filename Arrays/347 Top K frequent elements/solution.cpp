#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <queue>
using namespace std;


    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> uMap;
        vector<int> ans;
        // store frequency
        for(int i=0;i<nums.size();i++)
        {
            uMap[nums[i]]++;
        }
        // define minheap
        std::priority_queue<p,vector<p>,greater<p>> pq;
        //iterate over all the elements in map 
        for (auto &it:uMap){
            auto value = it.first;
            auto freq = it.second;
            pq.push({freq,value});
            if(pq.size()>k)
            pq.pop();
        }
        //result 
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }

int main(int argc, char const *argv[])
{
    int k=2;
    vector<int> vec{1,1,1,2,2,3};

    vector<int> ans= topKFrequent(vec,k);
    for(int val:ans)
    {
        std::cout<<val<<" ";
    }
    return 0;
}
