class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 10001;
        int max_profit = -10001;
        int cur_profit = -10001;
        for (auto p : prices) {
            cur_profit = p - min_price;
            max_profit = max(cur_profit, max_profit);
            min_price = min(min_price, p);
        }

        return max(max_profit, 0);
    }
};