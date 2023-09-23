#include <iostream>
#include <vector>
using namespace std;
int getFirstOccurence(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int fo = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == vec[mid])
        {
            fo = mid;
            end = mid - 1;
        }
        else if (target < vec[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return fo;
}
int getLastOccurence(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int lo = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == vec[mid])
        {
            lo = mid;
            start = mid + 1;
        }
        else if (target < vec[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return lo;
}
int main(int argc, char const *argv[])
{
    std::vector<int> vec{2, 4, 10, 10, 10, 18, 20};
    int fo = getFirstOccurence(vec, 10);
    int lo = getLastOccurence(vec, 10);
    std::cout <<(lo-fo)+1;
    return 0;
}
