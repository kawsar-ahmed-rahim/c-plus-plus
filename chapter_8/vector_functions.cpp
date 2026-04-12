#include<iostream>
#include <vector>
using namespace std;


//! size
int main() {
    vector<int> vec = {'a','b','c'};
    cout << "size = " << vec.size() << endl;
     return 0;
}

//! push_back
int main() {
    vector<int> vec;
    vec.push_back(26);
    cout << "size = " << vec.size() << endl;

    for(int val : vec) {
        cout << val << endl;
    }
     return 0;
}

//! pop_back
int main() {
    vector<int> vec;
    vec.push_back(26);
    vec.push_back(28);

    cout << "size = " << vec.size() << endl;

    vec.pop_back();

    

    for(int val : vec) {
        cout << val << endl;
    }
     return 0;
}
//! first value
// ! cout << vec.front() << endl;

//! last value
//! cout << vec.back() << endl;

//! particular value
//! cout << vec.at(0) << endl;

//! single number

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for(int val : nums) {
        ans  = ans ^ val;
    }
    return ans;
};