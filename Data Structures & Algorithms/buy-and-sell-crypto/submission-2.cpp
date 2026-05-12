class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> s;
        int n = prices.size();
        int maxProfit = 0;

        for(int i=0;i<n;i++){
            if(s.empty()) s.push(prices[i]);
            else{
                if(s.top() < prices[i]){
                    maxProfit = max(maxProfit, prices[i] - s.top());
                }else{
                    s.pop();
                    s.push(prices[i]);
                }
            }
        }
        return maxProfit;
    }
};
