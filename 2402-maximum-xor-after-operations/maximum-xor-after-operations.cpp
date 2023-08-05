class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        
        vector<int> track;


        for(int &it:nums){
            int index=0;
            while(it > 0){
                if(track.size()<=index) track.push_back(0);
                if(it%2)track[index]=1;
                it/=2;
                ++index;
            }
        }

        int ans=0;

        for(int i=0;i<track.size();++i)
            ans+=pow(2,i)*track[i];
        

        return ans;
    }
};