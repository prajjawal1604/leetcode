class Solution {
public:
    string clear(string s){
        
        int i=0;
        while(s[i] == ' ') ++i;

        s=s.substr(i);
        reverse(s.begin(),s.end());

        i=0;
        while(s[i] == ' ') ++i;

        s=s.substr(i);
        reverse(s.begin(),s.end());

        return s;

    }
    string reverseWords(string s) {
        s = clear(s);
        string ans;
        string temp;
        for(int i=0;i<s.size();++i){
            if(s[i]!=' ') temp+=s[i];
            else if(temp.size()){
                reverse(temp.begin(),temp.end());
                cout<<temp<<endl;
                ans += temp + " ";
                temp.clear();
            }
        }
        reverse(temp.begin(),temp.end());
        cout<<temp<<endl;
        ans += temp;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};