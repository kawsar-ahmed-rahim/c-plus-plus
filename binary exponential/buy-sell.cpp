int maxProfit(vector<int>& price){
    int maxProfit = 0,bestBuy = prices[0];
    for(int i = 1; i<price.size(); i++){
        if(price[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }bestBuy = min(bestBuy,prices[i])
    }
    return maxProfit;
}