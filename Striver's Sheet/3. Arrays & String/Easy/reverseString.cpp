#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size() - 1;
        for (int i = 0; i < s.size()/2; i++) {
            swap(s[i], s[j]);
            j--;
        }
    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    cout << "Before reverse: " << endl;
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    Solution S1;
    S1.reverseString(s);

    cout << "After reverse: " << endl;
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;
}