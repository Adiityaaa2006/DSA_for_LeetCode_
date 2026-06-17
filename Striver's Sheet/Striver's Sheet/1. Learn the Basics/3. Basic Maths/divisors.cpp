/*
Problem Statement - Divisors of a Number

You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
A number which completely divides another number is called it's divisor.

Example 1
Input: n = 6
Output = [1, 2, 3, 6]
Explanation: The divisors of 6 are 1, 2, 3, 6.

Example 2
Input: n = 8
Output: [1, 2, 4, 8]
Explanation: The divisors of 8 are 1, 2, 4, 8.

Constraints
1 <= n <= 1000

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> vec;
        int count = 1;

        for(int i=1; i<=n; i++) {
            if (n % i == 0) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution s1;

    vector<int> result = s1.divisors(n);
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
}
