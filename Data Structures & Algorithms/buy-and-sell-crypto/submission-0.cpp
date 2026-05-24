class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minbuy = INT_MAX;
        int maxp = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            int profit = 0;
            minbuy = min(minbuy,prices[i]);
            profit = prices[i]-minbuy;
            maxp = max(maxp,profit);
        }
        return maxp;
    }
};
