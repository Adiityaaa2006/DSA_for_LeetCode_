/*
Problem Statement - Palindrome Number
link - https://leetcode.com/problems/palindrome-number/

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:
-231 <= x <= 231 - 1

*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int num = x;
        int reverse = 0;

        while(num!=0) {
            int digit = num % 10;
            num = num / 10;

            if(reverse > INT_MAX / 10 || reverse < INT_MIN / 10) return false;

            reverse = reverse * 10 + digit;
        }

        if (x == reverse) return true;
        else return false;
    }
};

int main() {
    int x;

    cout << "Enter the number: ";
    cin >> x;

    Solution s1;

    bool ans = s1.isPalindrome(x);
    cout << "Palindrome Verification: " << ans;
}