#include<bits/stdc++.h>
using namespace std;

// void print() {
//     cout << "Hello World" << endl;
// }

// int main() {
//     int a = 5;
//     int b = 10;

//     cout << "Sum = " << a + b << endl;
//     print();
// }

//Algorithms 
//Containers
//Functions
//Iterators 

//Pairs

// void explainPair() {
//     pair<int , int> p1 = {1, 3};

//     cout << p1.first << " " << p1. second << endl;

//     pair<int, pair<int, int>> p2 = {1, {3, 4}};

//     cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

//     pair<int, int> arr[] = {{1, 2}, { 3, 4}, {5, 6}};

//     cout << arr[1].first << " " << arr[1].second << endl;
// }

// int main() {
//     explainPair();
// }

//Vectors

void explainVector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);  //Faster than push_back
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> ve(5, 100);

    vector<int> vee(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " _ ";

    it = it + 2;
    cout << *(it) << " - ";

    vector<int>::iterator a = v.begin();
    vector<int>::iterator b = v.end();
    // vector<int>::iterator c = v.rbegin();

    cout << v[0] << " + " << v.at(0);
}

int main() {
    explainVector();
}