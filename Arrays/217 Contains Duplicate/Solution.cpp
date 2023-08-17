#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    std::unordered_set<int> mSet;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mSet.count(nums[i]) > 0)
            return true;
        mSet.insert(nums[i]);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    vector<int> vec{2, 7, 7, 11, 15};
    std::cout << containsDuplicate(vec);

    return 0;
}
