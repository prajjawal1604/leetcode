class Solution {
public:

    void resolve(vector<vector<char>>& board, int i , int j){
        while(i<board.size() && board[i][j]=='X'){
            board[i][j]='O';
            ++i;
        }
    }

    int countBattleships(vector<vector<char>>& board) {
        int ans=0;
        
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[0].size();++j)
                if(board[i][j]=='X'){
                    if(j==0 || board[i][j-1] != 'O') ++ans;
                    
                    resolve(board,i,j);
                }
        }

        return ans;
    }
};