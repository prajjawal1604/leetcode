class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(), ans=n+1, diff=INT_MAX,pen;

        vector<int> yes(n+1,0), no(n+1,0);

        for(int i=1;i<=n;++i){
            if(customers[i-1]=='Y') ++yes[i];
            else ++no[i];

            yes[i]+=yes[i-1];
            no[i]+=no[i-1];
        }


        // for(int i=0;i<n+1;++i)
        //     cout<<yes[i]<<" ";

        // cout<<endl;

        // for(int i=0;i<n+1;++i)
        //     cout<<no[i]<<" ";

        cout<<endl;

        diff=no[n];
        for(int i=n;i>=0;--i){
            pen=yes[n]-yes[i] + no[i];
            // cout<<pen<<" "<<diff<<endl;
            if(diff>=pen){
                diff=pen;
                ans=i;
            }
        }

        return ans;

    }
};