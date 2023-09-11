class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& grp) {
         ios_base::sync_with_stdio(false);
        unordered_map<int, queue<int>> umap;
        vector<vector<int>> ans;
        vector<int> temp;
        int n=grp.size();

        for(int i=0;i<n;++i) umap[grp[i]].push(i);

        for(auto i:umap){

            // cout<<i.second.size()<<" ";
            int k=0;
            while(i.second.size()){
                ++k;
                temp.push_back(i.second.front());
                cout<<k<<" "<<i.second.front()<<endl;
                i.second.pop();
                if(k==i.first || !i.second.size()){
                    ans.push_back(temp);
                    cout<<"Pushing"<<endl;
                    temp.clear();
                    k=0;
                }
            }

            // if(temp.size())ans.push_back(temp);
            // temp.clear();

            // cout<<endl;
        }

        return ans;
    }
};