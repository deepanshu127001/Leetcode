#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    vector<int> vec(26, 0);
    if (s.length() != t.length())
        return false;
    for (int i = 0; i < s.length(); i++)
    {
        vec[s[i] - 'a']++;
        vec[t[i] - 'a']--;
    }
    for (int count : vec)
    {
        if (count != 0)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    string s = "hello";
    string t = "ollehd";
    cout << isAnagram(s,t);
    return 0;
}
