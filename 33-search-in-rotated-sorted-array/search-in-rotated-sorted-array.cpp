class Solution {
public:
    // int findPivot(){

    // }
    // int search(){

    // }
    int search(vector<int>& nums, int target) {
        // int n=findPivot,ans;

        // vector<int> firstHalf, secondHalf;

        // ans = search()//with 1st half

        // if(ans!=-1) return ans;

        // ans = search()//with 2nd half

        // return ans;

        for(int i=0;i<nums.size();++i)
            if(nums[i]==target) return i;

        return -1;
        

    }
};