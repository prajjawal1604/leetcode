class Solution {
public:
    int minDeletions(string s) {
        vector<int> track(26,0),num;

        for(char &st:s)
            ++track[st-'a'];
        
        for(int &it:track){
            // cout<<num[i]<<" ";
            if(it) num.push_back(it);}

        sort(num.begin(),num.end(),greater());

        int ans=0;

        for(int i=1;i<num.size();++i){
            
            // cout<<num[i]<<" ";

            if(num[i-1]<=0){
                ans+=num[i];
                num[i]=0;
            }
            else if(num[i]>=num[i-1]){
                ans+=(num[i]-num[i-1] + 1);
                num[i]-=(num[i]-num[i-1] + 1);
            }
        }

        return ans;

    }
};