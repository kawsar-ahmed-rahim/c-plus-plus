//! *****
//! *****
//! *****
//! *****
//! *****

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) { // outer loop // line
        for (int j = 1; j <= 5; j++) { // inner loop // column
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}