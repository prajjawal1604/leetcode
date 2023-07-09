class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0]!=sentence[sentence.size()-1]) return 0;
        char c;
        for(int i=0;i<sentence.size()-1;++i){

            if(sentence[i]==' ' && sentence[i+1]!=c) return false; 
            c=sentence[i];

        }
        
        return true;
    }
};