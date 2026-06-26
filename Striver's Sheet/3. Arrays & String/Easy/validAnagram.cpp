/*
LeetCode - 242. Valid Anagram

Solved - Easy
Topics - String, Hash Map

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 
Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/

#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char, int> mapp;

//         if (s.length() != t.length()) {
//             return false;
//         }

//         for (char ch : s) {
//             mapp[ch]++;
//         }

//         for (char ch : t) {
//             if (mapp.find(ch) == mapp.end() || mapp[ch] == 0) {
//                 return false;
//             }
//             mapp[ch]--;
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;
        unordered_map<char, int> mapT;

        for (char ch : s) {
            mapS[ch-'a']++;
        }

        for (char ch : t) {
            mapT[ch-'a']++;
        }

        if (mapS==mapT) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    string s = "ab";
    string t = "a";

    Solution S1;
    bool result = S1.isAnagram(s, t);
    cout << "Is Anagram? " << result;
}