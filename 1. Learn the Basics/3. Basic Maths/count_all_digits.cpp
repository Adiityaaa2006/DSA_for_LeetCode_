/*
Problem Statement - Count all Digits of a Number

You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Example 1
Input: n = 4
Output: 1
Explanation: There is only 1 digit in 4.

Example 2
Input: n = 14
Output: 2
Explanation: There are 2 digits in 14.


Constraints
1. 0 <= n <= 5000
2. n will contain no leading zeroes except when it is 0 itself.
*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;

        while(n>0) {
            n = n / 10;
            count++;
        }

        return count;
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution s1;
    int result = s1.countDigit(n);
    cout << "Digit count: " << result << "\n";

}