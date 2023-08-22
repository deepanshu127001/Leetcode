#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:

bool isPalindrome(string s) {
    // Remove non-alphanumeric characters and convert to lowercase
    std::string cleaned;
    for (char c : s) {
        if (std::isalnum(c)) {
            cleaned += std::tolower(c);
        }
    }
    
    // Use two pointers approach to check for palindrome
    int left = 0;
    int right = cleaned.length() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}
};