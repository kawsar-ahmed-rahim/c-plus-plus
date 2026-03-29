// execute the loop body at least once even the condition is false

//! print 1 to 5
#include <iostream>
using namespace std;
int main() {
    int i = 1; // initialization

    do {
        cout << i << "\n";
        i++; // update
    } while (i <= 5); // condition

    cout << endl;
    return 0;
}