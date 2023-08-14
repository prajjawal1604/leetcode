class Solution {
public:
    bool solve(vector<int>& nums, int i, int n, vector<int> & dp){
        if( i == n) return true;
        if(dp[i] != -1) return dp[i];

        int a=0,b=0,c=0;
       

        if(i+1 <n && nums[i+1] == nums[i]){
            a = solve(nums, i + 2, n, dp);
        }
        if(i+2 < n && nums[i] == nums[i+1] && nums[i] == nums[i+2]){
            b = solve(nums , i + 3, n, dp);
        }
        if(i+2 < n && nums[i+1] == nums[i] + 1 && nums[i+2] == nums[i+1] + 1){
            c = solve(nums, i + 3, n, dp);
        }

        return dp[i] =  (a|b|c);
    }
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        return solve(nums, 0, n, dp);
    }
};