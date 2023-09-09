class Solution {
    public int sum(int[] nums, int target, int[] dp){
        if(target<0) return 0;
        if(target==0) return 1;

        if(dp[target]!=-1) return dp[target];
        
        int ans=0;
        // for(int &it:nums)
        for(int i=0;i<nums.length;++i)
            ans+=sum(nums,target-nums[i],dp);

        return dp[target]=ans;
    }
    public int combinationSum4(int[] nums, int target) {
        int[] dp= new int[1001];
        Arrays.fill(dp, -1);
        return sum(nums, target, dp);
    }
}