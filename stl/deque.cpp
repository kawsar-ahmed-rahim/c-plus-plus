//! deque = double ended queue
// push_back & push_front
// emplace_back & emplace_front
//pop_back & pop_front

// size,erase,clear,begin,end,rbegin,rend,insert,front,back

#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    deque<int> d = {1,2,3,4};


    for(int val : d){
        cout << val << endl;
    }
    cout << endl;
    return 0;
}