class Solution {
public:
    int solve(int m, int n, int i, int j, vector<vector<int>> &dp) {
        if(i>m || j>n) return 0;

        if(i==m && j==n) return 1;

        if(dp[i-1][j-1] != -1) return dp[i-1][j-1];
        return dp[i-1][j-1] = solve(m,n,i+1,j,dp) + solve(m,n,i,j+1,dp);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return solve(m,n,1,1,dp);
    }
};