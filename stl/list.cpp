//! list or doubly linked list

//push_back
//push_front

//emplace_back
//emplace_front

//pop_back
//pop_front

//size,erase,clear,begin,end,rbegin,rend,insert,front,back

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
    list <int> l;

    l.push_back(1);
    l.push_front(3);

    for(int val : l){
        cout << val << endl;
    }
    cout << endl;
    return 0;
}
