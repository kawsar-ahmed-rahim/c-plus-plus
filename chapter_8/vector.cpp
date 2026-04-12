//! syntax

// vector<int>vec;
// vector<int>vec={1,2,3};
// vector<int>vec(3,0)

//! basic

#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec (4,7);
    cout << vec[0] << endl;
}

//! loop in vector

int main() {
    vector <int> vec (5,0);

    for(int i : vec){
        cout << i << endl;
    }
    return 0;
}

int main() {
    vector <char> vec= {'a', 'b'};

    for(char i : vec) {
        cout << i << endl;
    }
        return 0;

}



//! g++ -std=c++11 vector.cpp && ./a.out