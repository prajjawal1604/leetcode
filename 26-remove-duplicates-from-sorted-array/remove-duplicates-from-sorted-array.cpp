class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int> v;
        int vSize = v.size();

        for(int i = 0; i < len; i++){
            if(v.size() && v.back()==nums[i]){}
            else{
                v.push_back(nums[i]);
                // nums[v.size()-1] = v.back();
            }
        }
    
    nums=v;

    return v.size();

    }
};