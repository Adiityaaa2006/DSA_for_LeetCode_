#include<iostream>
using namespace std;

class Solution {
    public:
    void printNum(int n) {
        if (n < 1) return;

        cout << n << " ";
        n--;
        printNum(n);
    }
};

int main() {
    int n;

    cout << "Enter the Number: ";
    cin >> n;

    Solution s1;
    s1.printNum(n);
}