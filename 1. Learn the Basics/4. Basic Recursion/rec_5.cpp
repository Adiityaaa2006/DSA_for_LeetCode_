#include<iostream>
using namespace std;

class Solution {
    public:
    int factorial(int n, int fact) {

        // for (int i=1; i<=n; i++) {
        //     fact = fact * i;
        // }

        // return fact;
        if (n==0) {
            return fact;
        }
        return factorial(n-1, fact*n);
    }
};

int main() {
    int n, fact;

    cout << "Enter the number: ";
    cin >> n;

    Solution S1;
    int result = S1.factorial(n, 1);

    cout << "Factorial: " << result;
}

