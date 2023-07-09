class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> str(26,0);
        int ans=0;
        for(char &c:s)
            if(str[c-'a']==0){
                ++ans;
                str[c-'a']=1;
            }
        
        return ans;
    }
};