class Solution {
public:

    // int ans=0;

    int coinCheck(int amount, vector<int>& coins, int i, vector<vector<int>> &dp){

        if(i==coins.size() || amount <= 0) return amount == 0;
    
        if(dp[amount][i]!= -1) return dp[amount][i];
        
        return dp[amount][i] = coinCheck(amount - coins[i], coins, i, dp) + coinCheck(amount, coins, i+1, dp);        
    }
    int change(int amount, vector<int>& coins) {

        vector<vector<int>> dp(amount+1,vector<int>(coins.size()+1,-1));
        
        return coinCheck(amount, coins, 0, dp);

    }
};