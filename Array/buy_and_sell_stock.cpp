class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = prices[0], maxProfit = 0;
        for(int i=1; i<prices.size(); i++) {
            if(prices[i]<cheapest)
                cheapest = prices[i];
            else 
                maxProfit = max(maxProfit, prices[i] - cheapest);    
        }
        return maxProfit;
    }
};