class Solution {
public:
    bool jump(vector<int>& stones, int i, int k, int des, vector<vector<int>> &dp){
        if(i==stones.size()-1) return true;

        while(stones[i]<des){
            ++i;
            if(i==stones.size()) return false;
        }

        if(stones[i]>des || k==0) return false;

        if(dp[i][k] != -1) return dp[i][k];

        return dp[i][k] = jump(stones,i,k-1,des+k-1,dp) | jump(stones,i,k,des+k,dp) | jump(stones,i,k+1,des+k+1,dp);
        

    }
    bool canCross(vector<int>& stones) {
        vector<vector<int>> dp(stones.size(),vector<int>(stones.size(),-1));
        return jump(stones,0,1,stones[0]+1,dp);
    }
};