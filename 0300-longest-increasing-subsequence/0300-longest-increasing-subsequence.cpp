class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        for (int i = 0; i < dp.size(); ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }
        
        for (int i = 0; i < dp.size(); ++i)  {
            cout << dp[i] << ' ';
        }
        
        cout << endl;
        
        return *max_element(dp.begin(), dp.end());
    }
};