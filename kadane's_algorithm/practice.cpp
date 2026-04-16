//! maximum subarray sum
//! brute force
// subarray ={n*(n+1)}/2

#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    for(int st=0; st<n; st++) {
            int currSum = 0;
        for(int end=st; end<n; end++) {
            // for (int i=st; i<=end; i++) {
                //cout << arr[i];
            //};
            currSum +=arr[end];
            maxSum = max(currSum, currSum);
            
            //cout << " ";
        };
        //cout << endl;
    };
    cout << "sum: " << maxSum << endl;
    return 0;
}

//! kadane's algorithm
int maxSubArray(vector <int> & nums) {
    int currSum = 0, maxSum = INT_MIN;

    for (int val : nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0 ) {
            currSum = 0;

        }
    }
}