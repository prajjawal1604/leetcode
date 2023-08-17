class Solution {
public:
    int hIndex(vector<int>& citation) {
        sort(citation.begin(),citation.end());
        int n=citation.size();

        for(int i=n-1,j=1;i>=0;--i,++j){
            // cout<<citation[i]<<endl;
            if(j>citation[i]) return j-1;}
        
        return n;
    }
};