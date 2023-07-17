class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, t = prices[0];
        for (int i = 1 ; i < prices.size() ; i++){
            if (prices[i] < t) t = prices[i];
            mx = max(mx,prices[i]-t);
        }
        return mx;
    }
};