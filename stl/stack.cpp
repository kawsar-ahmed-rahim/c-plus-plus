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
using namespace std;

int main() {
    stack<int> s, s2;
    s2.swap(s);
    s.push(1);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }


    cout << "top = " << s.top() << endl;
    return 0;
}