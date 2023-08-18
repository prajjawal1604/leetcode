class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> temp(n, vector<int>(n, 0));
    
        for(int i=0;i<roads.size();i++)
        {
            temp[roads[i][0]][roads[i][1]]=1;
            temp[roads[i][1]][roads[i][0]]=1;
        }
   
        unordered_map<int, int> mp;
        for(int i=0;i<roads.size();i++)
        {
            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
        }
        
        int rank=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                rank=max(rank, (mp[i] + mp[j] - temp[i][j]));
            }
        }
        
        return rank;
    }
};