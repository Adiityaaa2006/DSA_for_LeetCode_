#include<bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     string longestPalindrome(string s) {
//         string str = "";
//         int i = 0;
//         int j = s.length()-1;
//         while(i < s.length()-1) {
//             // cout << " While Start - " << "Start Element " << s[i] << " End Element " << s[j] << endl;
//             if(s[i] == s[j]) {
//                 // cout << " if condition: true " << "s[i] " << s[i] << " s[j] " << s[j];
//                 str += s[i];
//                 // cout << " String: " << str << endl;
//             }
//             i++;
//             j--;
//         }
//         return str;
//     }
// };

class Solution {
public:
    string longestPalindrome(string s) {
        string str = "";
        
    }
};

int main() {
    string s = "abbc";
    cout << "Original String: " << s << endl;

    Solution S;
    string result = S.longestPalindrome(s);
    cout << "Palindromic Substring: " << result << endl;
}