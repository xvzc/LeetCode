class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, 0);
        vector<int> valid_coins;

        sort(coins.begin(), coins.end());
        for (auto coin : coins) {
            if (coin > amount) {
                continue;
            }

            dp[coin] = 1;
            valid_coins.push_back(coin);
        }
        
        for (int i = 1; i <= amount; ++i) {
            int cur_amount = 10001;
            for (auto coin : valid_coins) {
                if (coin > i || dp[i - coin] == -1) {
                    continue;
                }

                cur_amount = min(cur_amount, dp[i - coin] + 1);
            }
            
            dp[i] = cur_amount == 10001 ? -1 : cur_amount;
        }
        
        return dp[amount];
    }
};

// 1 2 3 4 5 6 7 8 9 10 11
// 1 1 0 0 1 2 2 