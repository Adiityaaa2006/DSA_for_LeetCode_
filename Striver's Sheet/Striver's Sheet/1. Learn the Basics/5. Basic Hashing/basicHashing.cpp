#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the times fetch: ";
    cin >> q;
    while(q--) {
        int num;
        cout << "Enter the number to fetch: ";
        cin >> num;
        // fetch
        cout << "Times repeat - ";
        cout << hash[num] << endl;
    }

    return 0;
}