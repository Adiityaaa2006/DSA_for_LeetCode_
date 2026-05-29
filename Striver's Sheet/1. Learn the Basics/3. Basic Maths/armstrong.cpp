/*
Problem Statement - Check if the Number is Armstrong

You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
(1)^3 + (5)^3 + (3)^3 = 153

Example 1
Input: n = 153
Output: true
Explanation: Number of digits : 3.
13 + 53 + 33 = 1 + 125 + 27 = 153.
Therefore, it is an Armstrong number.

Example 2
Input: n = 12
Output: false
Explanation: Number of digits : 2.
12 + 22 = 1 + 4 = 5.
Therefore, it is not an Armstrong number.

Constraints
0 <= n <= 109

*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int num = n;
        int result = 0;

        while(num>0) {
            int digits = num % 10;
            num = num / 10;
            result += digits * digits * digits;
        }

        if (result == n) return true;
        else return false;
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution s1;

    bool result = s1.isArmstrong(n);
    cout << "Is the number Armstrong ? " << result;
}