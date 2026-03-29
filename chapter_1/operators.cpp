//!  arithmetic operators  + - * / %

//! relational operators  < <= > >=

//! logical operators  && || !

//! bitwise operators

//! unary operators 
  //a = a+1;  // a++  a+=1
  //a = a-1;  // a--  a-=1

//! post increment a++  // use a then increment a
#include <iostream>
using namespace std;

int main(){
    int a=10;

    int b = a++; // post increment // work:update
    cout << a << "\n"; // 11
    cout << b << "\n"; // 10
    return 0;
}

//! pre increment ++a  // increment a then use a
#include <iostream>
using namespace std;

int main(){
    int a=10;

    int b = ++a; // pre increment // update: work
    cout << a << "\n"; // 11
    cout << b << "\n"; // 11
    return 0;
}