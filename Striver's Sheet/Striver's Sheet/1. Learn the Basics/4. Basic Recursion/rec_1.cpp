#include<iostream>
using namespace std;

// int n;
// int count = 0;

// void printName(string name) {
//     if (count == n) return;

//     cout << name << " ";
//     count++;
//     printName(name);
// }

// int main() {
//     string name;

//     cout << "Enter the Number of Count: ";
//     cin >> n;

//     cout << "Enter the Name: ";
//     cin >> name;

//     printName(name);
// }

void printName(string name, int count, int n) {
    if (count > n) return;

    cout << name << " ";
    printName(name, count + 1, n);
}

int main() {
    int n;
    string name;

    cout << "Enter the Number of Count: ";
    cin >> n;

    cout << "Enter the Name: ";
    cin >> name;

    printName(name, 1, n);
}