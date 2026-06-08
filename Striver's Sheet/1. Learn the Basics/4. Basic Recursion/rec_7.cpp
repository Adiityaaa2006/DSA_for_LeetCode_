#include<iostream>
using namespace std;

class Solution {
    public:
    bool palindrome(int n, string& str) {
        if (n >= str.length() / 2) return true;

        if (str[n] != str[str.length() - 1 - n]) return false;

        return palindrome(n+1, str);
    }
};

int main() {
    string s = "abcba";
    Solution sol;

    cout << sol.palindrome(0, s);
    cout << endl;

    return 0;
}