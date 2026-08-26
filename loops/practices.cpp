//! find lower case or upper case

#include <iostream>
using namespace std;

int main() {
    char ch = 'A';

    if (ch >= 'a' && ch <= 'z') {// if (ch>=65 && ch<=90) 
        cout << "lower case\n";
    } else if (ch >= 'A' && ch <= 'Z') {// else if(ch>=97 && ch<=122)
        cout << "upper case\n";
    } else {
        cout << "error\n";
    }
    return 0;
}

// a--97 A--65
// b--98 B--66