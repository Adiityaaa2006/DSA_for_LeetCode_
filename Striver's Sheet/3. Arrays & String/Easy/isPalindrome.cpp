#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length();
        while(i<=j) {
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if (i<j && tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout << "Original String: " << s << endl;

    Solution S1;
    bool result = S1.isPalindrome(s);

    cout << "Is Palindrome? " << result;
}    
