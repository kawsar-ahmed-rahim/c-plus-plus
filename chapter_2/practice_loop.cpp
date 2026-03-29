//! check a number is prime or not
#include <iostream>
using namespace std;

int main() {
    int n = 29;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false; // n is divisible by a number other than 1 and itself
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number\n";
    } else {
        cout << n << " is not a prime number\n";
    }
    return 0;
}

//  2 to root of n
//  => i*i <= n   -->root of n * root of n <= n
//  so we can write i*i <= n instead of i <= n-1

