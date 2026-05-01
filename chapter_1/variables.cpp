//! primitive data types

// .int
// .char
// .float
// .double
// .bool

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

int main() {
    int age=22;
    char grade='A';
    float PI=3.14f;
    bool isSafe = false;
    double price = 100.22;
    string name = "rahim";

    int newPrice = (int)price; // type casting
    int newPrice2 = price; // implicit conversion
    cout << age << "\n";
    cout << PI << "\n";
    cout << grade << "\n";
    cout << isSafe << "\n";
    cout << price << "\n";
    cout << newPrice << "\n";
    cout << name << endl;
    cout << fixed << setprecision(5) << price << endl;
    return 0;
}