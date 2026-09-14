#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    pair<string, int> p = {"rahim", 4};

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}

// pair of pair

int main() {
    pair<string, pair<char, int>> p = {1, {'s',4}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    return 0;
}

// vector of pair

int main() {
    vector<pair<int,int>> vec = {{1,2}, {2,2}, {4,4}};

    vec.push_back({4,5});
    vec.emplace_back(4,5);

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}