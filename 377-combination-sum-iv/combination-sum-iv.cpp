class Solution {
public:

    int sum(vector<int>& nums, int target, vector<int> &dp){
        if(target<=0) return target == 0;

        if(dp[target]!=-1) return dp[target];
        
        int ans=0;
        for(int &it:nums)
            ans+=sum(nums,target-it,dp);
        
        return dp[target] = ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(1001,-1);

        return sum(nums,target,dp);
    }
};