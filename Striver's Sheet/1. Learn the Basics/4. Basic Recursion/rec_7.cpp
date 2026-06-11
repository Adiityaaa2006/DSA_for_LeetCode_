#include<iostream>
using namespace std;

class Solution {
    public:
        // LeetCode
    // 125. Valid Palindrome
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size();

        while (i <= j) {
            while(i < j && !isalnum(s[i])) i++;  // isalnum - contains only alphabetic and numeric values
            while(i < j && !isalnum(s[j])) j--;
            if (i < j && tolower(s[i]) != tolower(s[j])) return false;  // tolwer - convert uppercase alphabets to lowercase
            i++;
            j--;
        }

        return true;
    }
};

int main() {
    string str = "A man, a plan, a canal: Panama";

    Solution sol;

    bool result = sol.isPalindrome(str);
    cout << "Output: " << result;

    return 0;
}