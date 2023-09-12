class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0;

        for(int i=0;i<nums.size()-1;++i){
            if((i-ans)%2==0){
                if(nums[i]==nums[i+1]){
                    ++ans;
                    // ++i;
                }
            }
        }



        return ans + (nums.size()-ans)%2;
    }
};