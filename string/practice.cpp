//! reverse a string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    // int len = str.length();
    // for(int i = len - 1; i >= 0; i--){
    //     cout << str[i];
    // }
    reverse(str.begin(), str.end());

    cout << str << endl;

    return 0;
}