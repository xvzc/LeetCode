class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 1);
        dp[0] = 0;

        for (int i = 2; i < dp.size(); ++i) {
            dp[i] = dp[i/2] + (i % 2);
        }

        return dp;
    }
};


// 0   0000 0
// 1   0001 1
// 2   0010 1
// 3   0011 2
// 4   0100 1
// 5   0101 2
// 6   0110 2
// 7   0111 3
// 8   1000 1
// 9   1001 2
// 10  1010 2
// 11  1011 3
// 12  1100 2
