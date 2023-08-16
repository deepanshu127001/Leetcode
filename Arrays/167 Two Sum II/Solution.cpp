//input array is sorted 
#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
        int start =0;
        int end = numbers.size()-1;
        while(start<=end)
        {
            if((numbers[start]+numbers[end])==target)
                return {start+1,end+1};
           else if(numbers[start]+numbers[end]<=target)
                start++;
            else if(numbers[start]+numbers[end]>=target)
                end--;

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