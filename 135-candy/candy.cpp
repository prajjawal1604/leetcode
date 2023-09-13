class Solution {
public:

    void check(vector<int> &ratings, vector<int> &last, int n){
        if(ratings[0]<=ratings[1]) last[0]=1;
        else last[0]=max(last[0],2);

        for(int i=1;i<n-1;++i){
            if(ratings[i]>ratings[i-1])
                last[i]=max(last[i],last[i-1]+1);
            else if(ratings[i+1]<ratings[i]) last[i]=max(last[i],2);
            else last[i]=max(last[i],1);
        }

        if(ratings[n-1]>ratings[n-2]) last[n-1]=last[n-2]+1;
        else last[n-1]=1;
    }

    int candy(vector<int>& ratings) {
        int ans=0,n=ratings.size();

        if(n<2) return 1; 

        vector<int> last(n,1);

        check(ratings,last,n);
        
        reverse(ratings.begin(),ratings.end());
        reverse(last.begin(),last.end());

        check(ratings,last,n);
        
        for(int &it:last)
            ans+=it;
        return ans;
    }
};