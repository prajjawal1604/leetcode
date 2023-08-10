class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int &it:nums)
            if(it==target) return true;

        return false;
    }
};