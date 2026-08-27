#include<iostream>
#include <vector>
using namespace std;

//! majority element

//!brute-force
//mj>n/2
int majorityElement(vector<int>nums){
    int n = nums.size();
    for(int val : nums) {
        int freq = 0;

        for(int el: nums) {
            if(el == val) {
                freq++;
            }
        }
        if(freq > n/2) {
            return val;
        }
    }
}

//! optimal solutions

int majorityElement(<><>nums) {
    int n = nums.size();

    //sort
    sort(nums.begin(),nums.end());

    //freq count 
    int freq = 1,ans=nums[0];
    for(int i=1;i<n.size();i++){
        if(nums[i]==[i-1]){
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
            return ans;
    }
}
//! moore's voting algorithm
int majorityElement(vector<int>nums){
    int freq = 0,ans = 0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                 ans  = nums[i];
            }
        
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
        return ans;
}