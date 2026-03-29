//! primitive data types

// .int
// .char
// .float
// .double
// .bool

#include <iostream>
using namespace std;

int main() {
    int age=22;
    char grade='A';
    float PI=3.14f;
    bool isSafe = false;
    double price = 100.22;

    int newPrice = (int)price; // type casting
    int newPrice2 = price; // implicit conversion
    cout << age << "\n";
    cout << PI << "\n";
    cout << grade << "\n";
    cout << isSafe << "\n";
    cout << price << "\n";
    cout << newPrice << "\n";
    return 0;
}