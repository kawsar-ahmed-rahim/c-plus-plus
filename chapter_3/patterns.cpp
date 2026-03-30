//! square pattern
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

//! A B C D
//! A B C D
//! A B C D
//! A B C D

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1; // 65 + 1 = 66 (B)
        }
        cout << "\n";
    }

    return 0;
}