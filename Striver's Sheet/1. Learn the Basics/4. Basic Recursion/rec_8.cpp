#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void fibonacci(int n) {
        if (n == 0) {
            cout << "The Fibonacci Series up to " << n << "th term:" << endl;
            cout << 0;
        } else {
            int secondLast = 0;
            int last = 1;

            cout << "The Fibonacci Series up to " << n << "th term:" << endl;
            cout << secondLast << " " << last << " ";
            
            int cur;
            for (int i=1; i < n; i++) {
                cur = last + secondLast;
                secondLast = last;
                last = cur;
                cout << cur << " ";
            }
        }
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution S1;
    S1.fibonacci(n);

    return 0;
}