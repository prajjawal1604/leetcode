class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=1;
        unordered_map<int,int> umap;

        ++umap[nums[0]];
        for(int i=1;i<nums.size();++i){
            ++umap[nums[i]];

            if(umap[nums[i]] <= 2) nums[start++] = nums[i];
            
        }

        return start;
    }
};