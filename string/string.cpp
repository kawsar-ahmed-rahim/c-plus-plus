//! character array
//! string: use of strlen
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = "Hello, World!";
    cout << strlen(str) << endl;
    cout << str[2] << endl;

    return 0;
}

// input and output
int main() {
    char str[100];
    cin >> str;
    cout << str << endl;

    return 0;
}

// input out put a full line
int main() {
    char str[100];
    cin.getline(str, 100);// name, length, delimiter
    cout << str << endl;

    return 0;
} 

// print all characters in a string
int main() {
    char str[100];
    cin.getline(str, 100);
    // for(int i = 0; i < strlen(str); i++){
    //     cout << str[i] << endl;
    // }

    for(char ch : str){
        if(ch == '\0') break;
        cout << ch << endl;
    }
    int len = 0;

    for(int i = 0; i < str[i] != '\0'; i++){
       len++;
     }
     cout << len << endl;

    return 0;
}