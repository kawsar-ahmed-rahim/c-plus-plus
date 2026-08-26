//! if else

#include <iostream>
using namespace std;

int main() {
    int n = 15;

    if (n >=10) {
        cout << "n is greater than or equal to 10\n";
    } else if (n < 10) {
        cout << "n is less than 10\n";
    } else {
        cout << "error\n";
    }
    return 0;
}