/*
Problem Statement - Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Constraints:
-231 <= x <= 231 - 1

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int revNum = 0;

        // n = 7789

        while(n!=0) {
            int num = n % 10;
            n = n / 10;

            /*
            // Overflow check

            INT_MAX = 2147483647 (2^31)
            INT_MIN = -2147483648 (-2^31)
            
            If value of revNum goes beyond this INT_MAX or INT_MIN limit 
            it goes outside the signed 32-bit integer range.
            
            
            */
            if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                return 0;

            revNum = revNum*10 + num;
        }

        return revNum;
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution s1;

    int revNum = s1.reverseNumber(n);
    cout << "Reverse Number: " << revNum;
}