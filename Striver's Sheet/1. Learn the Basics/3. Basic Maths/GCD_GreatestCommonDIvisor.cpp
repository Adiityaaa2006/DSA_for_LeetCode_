/*
Problem Statement - GCD of Two Numbers 

You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

What is GCD (Greatest Common DIvisor) ?

The Greatest Common Divisor (GCD)—also known as the Greatest Common Factor (GCF) or Highest Common Factor (HCF) 
is the largest positive integer that divides two or more numbers evenly, without leaving a remainder.

Example 1
Input: n1 = 4, n2 = 6
Output: 2
Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6
Greatest Common divisor = 2.

Example 2
Input: n1 = 9, n2 = 8
Output: 1
Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
Greatest Common divisor = 1.

Constraints
1 <= n1, n2 <= 1000
*/

#include<iostream>
#include<algorithm>  // for std::max
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int n = std::max(n1, n2);
        int gcd = 1;

        for(int i=1; i<=n; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};

int main() {
    int n1, n2;

    cout << "Enter the number1: ";
    cin >> n1;


    cout << "Enter the number2: ";
    cin >> n2;

    Solution s1;
    int result = s1.GCD(n1, n2);
    cout << "Greatest Common Divisor: " << result << "\n";
}
