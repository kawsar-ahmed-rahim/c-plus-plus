// push, emplace
// top
// pop
// size
// empty

#include<iostream>
#include<vector>
#include<list>
#include <stack>
#include<deque>
#include <queue>
using namespace std;

// ordering
int main() {
    priority_queue<int> q;
    
    q.push(1);

    while(!q.empty()){
        cout << q.top() << endl; 
        q.pop();
    }

    cout << endl;
    return 0;
}

// reverse order

int main() {
    priority_queue<int, vector<int>, greater<int>> q;
    
    q.push(1);

    while(!q.empty()){
        cout << q.top() << endl;
        q.pop();
    }

    cout << endl;
    return 0;
}