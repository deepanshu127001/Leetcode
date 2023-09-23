#include <iostream>
#include <vector>
using namespace std;
int getNoOfTimesSortedArrayIsRotated(std::vector<int>& nums) {
      int first=0;
        int n=nums.size();
        int last = n-1;
        int middle=0,prev=0,next=0;
        while (first<=last)
        {
            if (nums[first]<=nums[last])
            {
                return nums[first];
            }
            middle= first + (last-first)/2;
            prev = ( middle - 1 + n ) % n;
            next = ( middle +1 ) % n;
            
            if (nums[middle] <= nums[next] && nums[middle] <= nums[prev])
            {
                // return nums[middle];
                return middle;
            }
            if (nums[first] <= nums[middle])
            {
                first = middle + 1;
            }
            if (nums[middle] <= nums[last])
            {
                last= middle-1;
            }
        }
        return -1 ; 

}
int main(int argc, char const* argv[])
{
    vector<int>vec{ 11,12,15,2,5,6,8 };
    std::cout << getNoOfTimesSortedArrayIsRotated(vec);
    return 0;
}
