class Solution {
public:
    int ans=0,maxi=0;
    unordered_map<int, int> umap;

    void solve(vector<int>& nums, int i, int val){

        if(i>=nums.size()) {
            ++umap[val];
            if(val>=maxi) {
                ans=umap[val];
                maxi=val;    
            }
            return;
        }

        solve(nums,i+1,val);
        solve(nums,i+1,val | nums[i]);

    }

    int countMaxOrSubsets(vector<int>& nums) {

        solve(nums,1,0);
        solve(nums,1,nums[0]);

        return ans;
    }
};