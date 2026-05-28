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