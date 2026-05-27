#include<bits/stdc++.h>
using namespace std;


void print() {
    cout << "Hello World" << endl;
}

int sum(int a, int b) {
    return a + b;
}

//Algorithms 
//Containers
//Functions
//Iterators 

//Pairs

void explainPair() {
    pair<int , int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, { 3, 4}, {5, 6}};
    cout << arr[1].first << " " << arr[1].second << endl;
}

//Vectors

void explainVector() {
    vector<int> v;
    // A vector in C++ is a dynamic array.

    // push_back - First create object then move the object into vector
    /*
    Ex. 
    Student s("Aditya", 20);
    v.push_back(s);  
    */

    // emplace_back - Object is directly created.
    /*
    Ex.
    v.emplace_back("Aditya", 20);
    */ 

    v.push_back(1);
    v.emplace_back(2); 
    v.emplace_back(3);  
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);

    vector<pair<int, int>> vec;
    // Vector Storing pair

    vec.push_back({1, 2}); // In push_back values must be in defined in "{}". 
    // Result - {1, 2}
    vec.emplace_back(1, 2); // In emplace_back it auto understand and pushs it in pair "{}". 
    // Result - {1, 2}

    // vector<data_type> vectorName(size, value);
    vector<int> ve(5, 100);
    // Result - {100, 100, 100, 100, 100}

    vector<int> vee(5); 
    // vectorName(value);

    vector<int> v1(5, 20);
    // Result - {20, 20, 20, 20, 20}
    vector<int> v2(v1);
    // Result - {20, 20, 20, 20, 20}


    // Iterator - Points to the element inside a container
    vector<int>::iterator it = ve.begin();
    // v.begin() - points to the start of the vector memmory

    it++; // Increament 
    cout << *(it) << " _ " << endl;  // Output

    it = it + 2;  // Increament by 2
    cout << *(it) << " - " << endl;  // Output

    vector<int>::iterator a = v.begin();  
    // Define iterator a to the start of the vector
    vector<int>::iterator b = v.end();
    // Define iterator b right after end of the vector

    // vector<int>::iterator it = v.rend();
        /*
        Points iterator to the left side of the start of the vector memory.
        Iterates from Left to Right of the vector.
        */
       
    // vector<int>::iterator c = v.rbegin();
        /*
        Points iterator to the end of the vectors memory.
        Iterated from Right to Left of the vector  
        */

    cout << v[0] << " + " << v.at(0);
    // v[0] and v.at[0] both points to value stored at index 0.

    cout << v.back() << " " << endl;
    // {10, 20, 30} - Points to the back element 30.

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    // Output - 1 2 3 4 5 6 

    for(auto it = ve.begin(); it != ve.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    // Output - 100 100 100 100 100

    for(int it : v1) {
        cout << it << " ";
    }
    cout << endl;
    // Output - 20 20 20 20 20

    // {10, 20, 30, 43, 55, 67}
    v.erase(v.begin() + 1);
    // Output - {10, 30, 43, 55, 67}

    v.erase(v.begin() + 2, v.begin() + 4);
    // Output - {10, 20, 55, 67}

    // Insert Function

    vector<int> vect(2, 100);
    // Result - {100, 100}
    vect.insert(vect.begin()+1, 2, 10);
    // Result - {100, 10, 10, 100}

    vector<int> copy(2, 50); 
    // {50, 50}
    vect.insert(vect.begin(), copy.begin(), copy.end());
    // Result - {50, 50, 100, 10, 10, 100}

    cout << v.size();
    // 6

    // {1, 2, 3, 4, 5, 6}
    v.pop_back();
    // Output - {1, 2, 3, 4, 5}
    // Pops out last element (6)


    // v1 - {20, 30}
    // v2 - {10, 40}
    v1.swap(v2);
    // Result - v1 = {10, 40} & v2 = {20, 30}

    v.clear(); 
    // erases the entire vector
    
    cout << v.empty();

}

void explainList() {
    list<int> ls;

    ls.push_back(4);  // {4}
    ls.emplace_back(5);  // {4, 5}

    ls.push_front(3);  // {3, 4, 5}
    ls.emplace_front(2); // {2, 3, 4, 5}

    // Rest all Functions are similar as vector.
    // begin, end, rend, rbegin, swap, erase, insert, size.
}

void explainDeque() {
    deque<int> dq;

    dq.push_back(1);  // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(3);  // {3, 1, 2}
    dq.emplace_front(4);  // {4, 3, 1, 2}

    dq.pop_back();  // {4, 3, 1}
    dq.pop_front();  // {3, 1}

    dq.back();


    // Rest all Functions are similar as vector.
    // begin, end, rend, rbegin, swap, erase, insert, size.
}

void explainStack() {
    stack<int> st;
    // LIFO - Last In First Out

    st.push(1);  // {1}
    st.push(2);  // {2, 1}
    st.push(3);  // {3, 2, 1}
    st.push(4);  // {4, 3, 2, 1}
    st.emplace(5);  // {5, 4, 3, 2, 1}

    cout << st.top() << endl;  
    // print 5 "st[2] is invalid"

    st.pop();  
    // st looks like {4, 3, 2, 1}

    cout << st.top() << endl; 
    // Output - 3

    cout << st.size() << endl; 
    // Output - 4

    cout << st.empty() << endl; 
    // Output - 0 (False)

    stack<int>st1, st2;
    st1.swap(st2); // swap
}

void explainQueue() {
    queue<int> q;
    // FIFO - First In First Out

    q.push(1);  // {1}
    q.push(2);  // {1, 2}
    q.push(3);  // {1, 2, 3}
    q.push(4);  // {1, 2, 3, 4}
    q.emplace(5);  // {1, 2, 3, 4, 5}

    q.back() += 5;  // back means the last here last is 5 so 5 + 5 = 10
    cout << q.back() << endl;
    // Output - 10

    cout << q.front() << endl;  
    // print 1 
    // "q[2] is invalid"

    q.pop();  
    // q looks like {2, 3, 4, 5}

    cout << q.front() << endl; 
    // Output - 2

    cout << q.size() << endl; 
    // Output - 4

    cout << q.empty() << endl; 
    // Output - 0 (False)

    queue<int>st1, st2;
    st1.swap(st2); // swap
}

void explainPQ() {
    // Max Heap
    priority_queue<int> pq;
    // Stores data in sorted order from higher to higher

    pq.push(10);  // {10}
    pq.push(20);  // {20, 10}
    pq.push(30);  // {30, 20, 10}
    pq.emplace(40);  // {40, 30, 20, 10}
    pq.emplace(8);  // {40, 30, 20, 10, 8}

    cout << pq.top() << endl;
    // Output - 40

    pq.pop();  // {30, 20, 10}

    cout << pq.top() << endl;
    // Output - 30

    // size swap empty functions are same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> prq;
    // Stores data in sorted order in a priority from lower to higher

    prq.push(5);  // {5}
    prq.push(2);  // {2, 5}
    prq.push(8);  // {2, 5, 8}
    prq.emplace(10);  // {2, 5, 8, 10}

    cout << prq.top() << endl;
    // Output - 2

    // Time Complexity

    // push - log n
    // top - O(1)
    // pop - log n

}

void explainSet() {
    set<int> st;
    // Stores only unique elemenst in a sorted order.
    
    st.insert(1);  // {1}
    st.emplace(2);  // {1, 2}
    st.emplace(3);  // {1, 2, 3}
    st.emplace(2);  // {1, 2, 3}
    st.emplace(4);  // {1, 2, 3, 4}

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as others

    // {1, 2, 3, 4}
    auto it1 = st.find(3);

    // {1, 2, 3, 4}
    auto it2 = st.find(6);
    // 6 is not in list so it will return end()
    // Result - end()

    st.erase(5);
    // erase 5

    int cnt = st.count(1);
    // Result - 1 if exists else 0 if not exists

    auto it3 = st.find(3);
    auto it4 = st.find(6);
    st.erase(it3, it4);  // {first, last}

}

void explainMultiSet() {
    // Everything is same as set
    // only stores duplicate element also

    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.insert(1);  // {1, 1}
    ms.insert(1);  // {1, 1, 1}

    ms.erase(1);  // all 1 is erased

    int cnt = ms.count(1);

    // only single 1 is erased
    ms.erase(ms.find(1));

    // rest all functions same as set
}

void explainMap() {
    map<int, int> mp;
    map<int, pair<int ,int>> mpp;
    map<pair<int ,int>, int> mapp;
}
 
int main() {
    // Pairs
    // int a = 5;
    // int b = 10;

    // cout << "Sum = " << a + b << endl;
    // int s = sum(1, 5);
    // cout << s << endl;
    // print();

    // Pairs
    // explainPair();

    // Vectors
    // explainVector();

    // List
    // explainList();

    // Deque
    // explainDeque();

    // Stack
    // explainStack();

    // Queue
    // explainQueue();

    // Priority Queue
    // explainPQ();

    // Set
    explainSet();

}
