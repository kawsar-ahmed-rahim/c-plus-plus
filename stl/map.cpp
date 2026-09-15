// insert, emplace
// count
// erase
// find
// size, empty, erase

#include<iostream>
#include<vector>
#include<list>
#include <string>
#include <map>
using namespace std;

// sorted according to key
int main() {
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;

    m.insert({"camera", 26});
    m.emplace("camera", 26);

    m.erase("tv");

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
        cout << m.count("laptop") << endl;
        cout << m["laptop"] << endl;
    }

    if(m.find("tv") != m.end()){
        cout << "found\n";
    }else {
        cout << "not found\n"; 
    }
    return 0;
}

// multimap

//unordermap