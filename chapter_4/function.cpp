//! basic structure
#include<iostream>
using namespace std;

// function definition
int printHello() {
    cout << "Hello World\n";
    return 5;
}

int main() {
    // function call
    printHello();
    int val = printHello();
    cout << "val = " << val << endl;
    return 0;
}

//! sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    int result = sum(2, 4);
    cout << "The sum is: " << result << endl;

    return 0;
}   

//! min of two numbers

int min(int a, int b) { //parameters/copy of arguments
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int  main() {
    int num1, num2;


    int result = min(3,5); //arguments/actual values
    cout << "The minimum is: " << result << endl;

    return 0;
}

//! sum of n numbers

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    cout << "The sum is: " << sum(8) << endl;

    return 0;
}

//! factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;


    cout << "The factorial is: " << factorial(9) << endl;

    return 0;
}

//! calculate sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10; // remove the last digit
    }
    return sum;
}
int main(){
    cout << "sum = " << sumOfDigits(1234) << endl;
    return 0;

}

//! calculate (nCr): binomial coefficient for n & r
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    return fact_n / (fact_r * fact_n_r);
}
int main() {
    int n = 8, r = 3;

    cout << "nCr = " << nCr(n, r) << endl;

    return 0;
}