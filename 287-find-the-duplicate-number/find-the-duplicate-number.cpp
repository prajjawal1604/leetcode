class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;

        for(int &it:nums){
            if(umap[it]) return it;
            ++umap[it];}

        return 0;
    }
};