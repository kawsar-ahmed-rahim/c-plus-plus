//! vector
// size & capacity
// push_back & pop_back
// emplace_back
// at() or []
// front & back
// erase
 // clear
// insert
// empty
// begin
//end
//rbegin
//rend


#include<iostream>
#include<vector>
using namespace std;

//! vector

int main() {
    vector<int> vec; // 0
    // vector<int> vec = {1,3};
    // vector<int> vec(3,10); // vec(size,element) = 10 10 10
    // vector<int> vec2(vec1);

    vec.push_back(1); //! push first value
    vec.emplace_back(1); //! push first value
    vec.pop_back(); //! pop last value
    vec.erase(vec.begin()); //!pop first value
    vec.erase(vec.begin()+2); //!pop third value
    vec.erase(vec.begin()+2, vec.begin()+3); //!rang(start,end)
    vec.insert(vec.begin()+2,100); //! insert[position,value)
    vec.clear();//! full vector removed
    cout << vec.size() << endl; //! size
    cout << vec.capacity() << endl; //! capacity
    cout << vec.empty();//! check the vector is empty or not
    //! print vector
    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;
    cout << vec[1]; //! particular value
    cout << vec.at(1); //! particular value
    cout << vec.front();//! first value
    cout << vec.back();//! last value

    cout << *(vec.end());//! first value
    cout << *(vec.end());//! next value of last value

    //!iterators(forward)
    vector<int> vec = {1,3};
    vector<int>::iterator it;

    for(it=vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }

     vector<int> vec = {1,3};
     for(auto it=vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }

    //!iterators(backward)
    vector<int> vec = {1,3};
    vector<int>::reverse_iterator it;

    for(it=vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    }
    //! or
    vector<int> vec = {1,3};
     for(auto it=vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    }


    return 0;




}