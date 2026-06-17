#include<iostream>
using namespace std;

int count = 0;

void printNum() {
    if (count == 4) return;

    cout << count << endl;
    count++;
    printNum();
}

int main() {
    printNum();
}
