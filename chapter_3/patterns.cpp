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

//! 1 2 3 4
//! 5 6 7 8
//! 9 10 11 12
//! 13 14 15 16

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    return 0;
}

// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }

    return 0;
}

// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}

// A 
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << "\n";
        ch = ch + 1;
    }

    return 0;
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<stdio.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

//! reverse triangle
// 1
// 2 1
// 3 2 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

// A
// B A
// C B A


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    char ch;
    for (int i = 1; i <= n; i++) {
        ch = 'A' + i - 1; // A + 1 - 1 = A, A + 2 - 1 = B
        for (int j = i; j >= 1; j--) {
            cout << ch << " ";
            ch = ch - 1;
        }
        cout << "\n";
    }
    return 0;
}


//! floyd triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    return 0;
}

// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }
    return 0;
}

// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < i; j++) {
            cout << " "; 
        }
        // print numbers
        for (int j = 0; j < n - i; j++) {
            cout << (i+1);
        }
        cout << "\n";
    }

    return 0;
}

// A A A A
//   B B B
//     C C
//       D

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    char ch = 'A';
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < i; j++) {
            cout << " "; 
        }
        // print characters
        for (int j = 0; j < n - i; j++) {
            cout << ch;
        }
        cout << "\n";
        ch = ch + 1;
    }

    return 0;
}

//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        // print spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // print increasing numbers
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        // print decreasing numbers
        for(int j=i-1; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

//! hallow diamond pattern
        //    *
        //   * *
        //  *   *
        // *     *
        //  *   *
        //   * *
        //    *

#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows in the upper half

    // upper half
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
                // print spaces
                for (int j = 0; j < 2 * i - 1; j++) {
                    cout << " ";
                }
                cout << "*";
            }

    // lower half
    for (int i = 0; i <= n - 1; i++) {
        // print spaces
        for (int j = 0; j <= i+1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2) {   
            // space 
            for (int j = 0; j < 2 * (n - i - 1) - 5; j++) {
                cout << " ";
            }
                    cout << "*";


        }      
          cout << "\n";
    }

    return 0;
}