#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s;
    cout << "Enter the String: ";
    cin >> s;

    // pre compute
    int hash[26] = {0};  // use 256 for all charachters
    for (int i=0; i<s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;

    cout << "Occurence? ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter the string to check: ";
        cin >> c;
        // fetch
        cout << "Frequency: " << hash[c-'a'] << endl;
    }
}