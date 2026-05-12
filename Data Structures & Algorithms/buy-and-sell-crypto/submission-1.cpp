class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        for(int i=0;i<n; i++){
            int buy = prices[i];
            for(int j=i+1;j<n;j++){
                int sell = prices[j];
                maxProfit = max(maxProfit, sell - buy);
            }
        }
        return maxProfit < 0 ? 0 : maxProfit;
    }
};
