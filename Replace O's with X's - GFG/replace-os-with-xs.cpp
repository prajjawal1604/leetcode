//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void convert(int i,int j,vector<vector<char>> &mat,vector<vector<char>> &ans){
        if(i>=mat.size() || i<0 || j<0 || j>=mat[0].size()) return;
        
        if(ans[i][j]=='O' || mat[i][j]=='X') return;
        else ans[i][j]='O';
        
        convert(i+1,j,mat,ans);
        convert(i-1,j,mat,ans);
        convert(i,j+1,mat,ans);
        convert(i,j-1,mat,ans);
        
        
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<char>> ans(n,vector<char>(m,'X'));
        
        for(int i=0;i<m;++i)
            if(mat[0][i]=='O') convert(0,i,mat,ans);
        for(int i=0;i<n;++i)
            if(mat[i][0]=='O') convert(i,0,mat,ans);
        
        for(int i=0;i<m;++i)
            if(mat[mat.size()-1][i]=='O') convert(mat.size()-1,i,mat,ans);
        for(int i=0;i<n;++i)
            if(mat[i][mat[0].size()-1]=='O') convert(i,mat[0].size()-1,mat,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends