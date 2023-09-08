class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i=2;
        vector<vector<int>> ans;
        vector<int> temp(i,1);

        if(numRows==1){
            ans.push_back({1});
            return ans;
        }
        else{
            ans.push_back({1});
            ans.push_back({1,1});
        }

        while(numRows > i++){
            
            temp.push_back(1);
            for(int j=1;j<i-1;++j) temp[j]=ans[i-2][j-1]+ans[i-2][j];
            ans.push_back(temp);
        }

        return ans;
    }
}; 