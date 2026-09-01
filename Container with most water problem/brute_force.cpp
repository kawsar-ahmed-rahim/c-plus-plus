int maxArea(vector<int>& height) {
    int maxwater = 0;

    for(int i=0; i<height.size();i++){
        for(int j=i+1; j<height.size();j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}