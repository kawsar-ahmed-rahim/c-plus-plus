//! basic
#include <iostream>
using namespace std;

int main() {
    //initialize
    int marks[5] = {1, 2, 3, 4, 5};
    int price[] = {1, 3, 4, 5};

    // access
    cout << marks[4] << endl;

    //size
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;
}

//! loops on array

int main() {
    // int marks[5] = {1, 2, 3, 4, 5};
    int marks[5];

    // input
    for(int i=0; i<5; i++){
        cin >> marks[i];
    }

    // output
    for(int i=0; i<5; i++){
        cout << marks[i] << endl;
    }
    return 0;
}

//! find smallest  in array

int main() {
    int nums[5] = {2, 3, 4, 5, 5};

    int smallest = INT_MAX;

    for(int i=0; i<4; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        // smallest = min(nums[i], smallest);
    }
    cout << "smallest" << smallest << endl;
    return 0;

}

//! find largest  in array

int main() {
    int nums[5] = {2, 3, 4, 5, 5};

    int largest = INT_MIN;

    for(int i=0; i<4; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
        // largest = max(nums[i], smallest);
    }
    cout << "largest" << largest << endl;
    return 0;

}