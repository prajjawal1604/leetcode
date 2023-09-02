class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i-1] + 1;
            for (const auto &w : dictionary) {
                if (i - (int)w.size() >= 0 && s.compare(i - w.size(), w.size(), w) == 0) {
                    dp[i] = min(dp[i], dp[i - w.size()]);
                }
            }
        } 
        return dp[n];
    }
};
