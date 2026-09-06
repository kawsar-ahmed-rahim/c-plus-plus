//! string
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << str.length() << endl;
    cout << str << endl;

    return 0;
}

//! concatenation
int main() {    
    
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = str1 + str2;
    cout << str3 << endl;

    return 0;
}

//! length of a string
int main() {
    string str;
    getline(cin, str);
    cout << str.length() << endl;

    return 0;
}

//! print all characters in a string
int main() {
    string str;
    getline(cin, str);
    // for(char ch : str){
    //     cout << ch << endl;
    // }

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << endl;
    }

    return 0;
}