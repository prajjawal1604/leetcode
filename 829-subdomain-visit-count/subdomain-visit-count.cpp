class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string , int> umap;

        vector<string> ans;

        for(int i=0;i<cpdomains.size();++i){
            int no=0,space;
            bool flag=false;
            vector<int> dot;
            string num,domain;

            for(int j=0;j<cpdomains[i].size();++j){
                // cout<<cpdomains[i][j]<<" ";
                if(cpdomains[i][j]==' ') space=j;
                if(cpdomains[i][j]=='.') dot.push_back(j);

            }

            num=cpdomains[i].substr(0,space);
            no=stoi(num);

            domain=cpdomains[i].substr(space+1);
            umap[domain]+=no;

            for(int j=0;j<dot.size();++j){
                domain=cpdomains[i].substr(dot[j]+1);
                umap[domain]+=no;
            }
        }
        
        for(auto &m:umap)
            ans.push_back(to_string(m.second) + " " + m.first);
        
        return ans;
    }
};