class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> empty;
        priority_queue<int> track;

        for(int i=0;i<k;++i)track.push(nums[i]);
        
        ans.push_back(track.top());

        for(int i=k;i<nums.size();++i){
            
            track.push(nums[i]);
            ++empty[nums[i-k]];
            while(empty[track.top()]){
                int n=track.top();
                track.pop();
                --empty[n];
            }
            
            ans.push_back(track.top());

        }



        return ans;
    }
};