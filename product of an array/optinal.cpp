vector<int > productExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,l);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    // prefix
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] * nums[i-1]
    }

     // suffix
    for(int i=n-2; i>=n; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for(int i=0; i<n; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;

}


vector<int > productExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,l);
   
    vector<int> suffix(n,1);

    int prefix = 1;

    // prefix
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1]*nums[i-1];
    }

    int suffix = 1;
     // suffix
    for(int i=n-2; i>=n; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;

}