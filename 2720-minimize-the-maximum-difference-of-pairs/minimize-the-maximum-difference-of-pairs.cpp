class Solution {
public:
    bool check(vector<int>& nums, int p, int mid){

        for(int i=1;i<nums.size();++i){

            if(nums[i]-nums[i-1] <= mid){ --p; ++i;}

            if(p<=0) return true;
        }

        return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        
        int l=0,r=pow(10,9),mid,ans;
        while(l<=r){
            mid=(l+r)/2;

            if(check(nums,p,mid)) {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;

        }

        return ans;
    }
};