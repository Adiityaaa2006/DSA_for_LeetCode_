#include<iostream>
using namespace std;

int n;
int count = 1;

void printName(string name) {
    if (count == n) return;

    cout << name;
    count++;
    printName(name);
}

int main() {
    int n, count;
    string name;

    cout << "Enter the Number of Count: ";
    cin >> n;

    cout << "Enter the Name: ";
    cin >> name;

    printName(name);
}