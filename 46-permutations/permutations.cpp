class Solution {
public:
    vector<vector<int>> ans;

    void permutations(vector<int>& nums, int l=0){
        if(l==nums.size()){
            ans.push_back(nums);
            return;}

        for(int i=l;i<nums.size();++i){
            swap(nums[l],nums[i]);
            permutations(nums,l+1);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        permutations(nums);
        return ans;
    }
};