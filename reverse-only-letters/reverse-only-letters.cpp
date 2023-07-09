class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0,end=s.size()-1;
        
        while(start < end){
            
            if(start<s.size() && ((s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z'))){
                if(end>0 && ((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z')))
                    {swap(s[start],s[end]); ++start; --end;}
                else --end;
            }
            else ++start;
        }

        return s;
    }
};