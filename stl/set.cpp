// insert, emplace
// count
// erase
//find
// size, empty, erase

// lower bound
// upper bound

#include<iostream>
#include<vector>
#include<list>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    set<int> s;
    

    s.insert(1);


    for(auto val : s){// no duplicate value
        cout << val << " ";
    }
    cout << endl;

 
    return 0;
}

// multimap

