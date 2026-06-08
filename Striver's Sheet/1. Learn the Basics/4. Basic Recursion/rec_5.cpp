#include<iostream>
using namespace std;

class Solution {
    public:
    void factorial(int n, int fact) {

        for (int i=1; i<=n; i++) {
            fact = fact * i;
        }

        cout << "Factorial: " << fact;
    }
};

int main() {
    int n, fact;

    cout << "Enter the number: ";
    cin >> n;

    Solution S1;
    S1.factorial(n, 1);
}

