class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minimum=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minimum=min(minimum,prices[i]);
            profit=max(profit,prices[i]-minimum);
        }
        return profit;
    }
};