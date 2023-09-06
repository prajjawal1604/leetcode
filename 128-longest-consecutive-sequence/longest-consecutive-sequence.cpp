class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int,int> umap;
        if(nums.size()<=1) return nums.size();
        int  ans=1,count=1,maxi=0;

        // for(int &it:nums){
        //     maxi=max(maxi,it);
        //     ++umap[it];
        // }

        // for(int i=0;i<=maxi;++i)


        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();++i){
            if(nums[i]-1==nums[i-1]) ++count;
            else if(nums[i]-nums[i-1]>1) {
                ans=max(ans,count);
                count=1;
            }
        }

        ans=max(ans,count);

        return ans;

    }
};