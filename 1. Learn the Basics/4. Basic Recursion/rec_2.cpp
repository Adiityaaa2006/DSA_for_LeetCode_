#include<iostream>
using namespace std;

void printNum(int n, int count) {
    if (count > n) return;

    cout << count << " ";
    printNum(n, count + 1);
}

int main() {
    int n;

    cout << "Enter the Number: ";
    cin >> n;

    printNum(n, 1);
}