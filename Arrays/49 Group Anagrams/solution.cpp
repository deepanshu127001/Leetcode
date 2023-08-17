#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> umap;
    vector<vector<string>> ans;
    for (auto x : strs)
    {
        string temp = x;
        sort(x.begin(), x.end());
        umap[x].push_back(temp);
    }
    for (auto x : umap)
    {
        ans.push_back(x.second);
    }
    return ans;
}
int main()
{
    vector<string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(vec);
    for (const auto &row : ans)
    {
        for (const std::string &element : row)
        {
            std::cout << element << " ";
        }
    }
}