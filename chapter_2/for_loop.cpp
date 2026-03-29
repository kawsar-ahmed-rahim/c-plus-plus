//! print 1 to 10

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) { // initialization, condition, update
        cout << i << "\n";
    }
    return 0;
}

//! sum of numbers

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }
    cout << "sum is: " << sum << "\n";
    return 0;
}

//! use of break
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // exit the loop
        }
        cout << i << "\n";
    }
    return 0;
}

//! use of continue
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skip the current iteration
        }
        cout << i << "\n";
    }
    return 0;
}

//! sum of all odd numbers from 1 to n
#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // check if the number is odd
            sum += i; // sum = sum + i
        }
    }
    cout << "sum of odd numbers is: " << sum << "\n";
    return 0;
}