// push,emplace
// front
// pop
// size
// empty
//swap

// push, emplace
// top
// pop
// size 
// empty
// swap

#include<iostream>
#include<vector>
#include<list>
#include <stack>
#include<deque>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    
    q.push(1);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    cout << endl;
    return 0;
}