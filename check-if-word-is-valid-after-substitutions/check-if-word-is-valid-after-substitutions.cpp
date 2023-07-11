class Solution {
public:
    bool isValid(string s) {
        vector<char> st(s.size());
        int point=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='c'){
                if(point-2>=0 && (st[point-1]=='b' && st[point-2]=='a')) point-=2;
                else return false;
            }
            else st[point++]=s[i];
        }

        return point==0;
    }
};