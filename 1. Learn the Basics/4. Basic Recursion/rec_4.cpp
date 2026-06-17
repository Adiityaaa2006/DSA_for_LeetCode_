#include<iostream>
using namespace std;

class Solution {
    public:
    void sum(int n, int num, int count) {
        if (count > n) {
            cout << num;
            return;
        }
        
        num += count;
        sum(n, num, count + 1);
    }
};

int main() {
    int n;
    int num = 0;

    cout << "Enter the Number: ";
    cin >> n;

    Solution S1;

    S1.sum(n, num, 1);
}