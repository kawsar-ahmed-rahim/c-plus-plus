//! decimal to binary
#include <iostream>
using namespace std;

int decToBinary(int n) {
    int binary = 0;
    int pow = 1; // 1, 10, 100, 1000, ...
    while (n > 0) {
        int lastDigit = n % 2;
        binary = binary + lastDigit * pow;
        pow = pow * 10;
        n = n / 2; // remove the last digit
    }
    return binary;
}

int main() {
    int n = 9;

    cout << "The binary representation is: " << decToBinary(n) << endl;

    return 0;
}

//! binary to decimal
#include <iostream>
using namespace std;

int binaryToDec(int n) {
    int decimal = 0;
    int pow = 1; // 1, 10, 100, 1000, ...
    while (n > 0) {
        int lastDigit = n % 10;
        decimal = decimal + lastDigit * pow;
        pow = pow * 2;
        n = n / 10; // remove the last digit
    }
    return decimal;
}

int main() {
    int n = 1001;

    cout << "The decimal representation is: " << binaryToDec(n) << endl;

    return 0;
}

//! convert -8 to binary & reverse

// 1) -8
// 2) 1000
// 3) 01000
// 4) 1's -> 10111
// 5) +1 -> 11000

// 1) 11000
// 2) 1's -> 00111
// 3) +1 -> 01000
// 4) 1000 -> 8