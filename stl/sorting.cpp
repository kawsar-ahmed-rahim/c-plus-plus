#include<iostream>
#include<vector>
#include<list>
#include <string>
#include <map>
#include <set>

using namespace std;
// ascending
int main() {
    int arr[5] = {3,4,5,2,4};

    sort(arr, arr+5);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

int main() {
 vector<int> vec = {3,4,5,2,4};

    sort(vec.begin(), vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// descending

int main() {
 vector<int> vec = {3,4,5,2,4};

    sort(vec.begin(), vec.end(), greater<int>());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
//pair

//sorted by first value

int main() {
 vector<pair<int, int>> vec = {{3,1},{3,3}};

    sort(vec.begin(), vec.end());

    for(auto val : vec){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    return 0;
}

//sorted by second value

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second <p2.second) return true;
    else return false;
}

int main() {
 vector<pair<int, int>> vec = {{3,1},{3,3}};


    sort(vec.begin(), vec.end(), comparator);

    for(auto val : vec){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    return 0;
}

//! reverse(v.begin(), v.end())

//! next_permutation(v.begin(), v.end())

//! swap, min, max

//! max_element(v.begin(), v.end())
//! min_element(v.begin(), v.end())
//! binary_search(v.begin(), v.end(), target)