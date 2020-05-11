    bool exist(vector<vector<char>>& board, string &word,vector<vector<bool>>&visited,int indexx,int indexy,int index)
    {
        if(index==word.size())
            return true;
        if(indexx>=board.size()||indexx<0||indexy>=board[0].size()||indexy<0||visited[indexx][indexy])
            return false;
        if(board[indexx][indexy]!=word[index])
            return false;
        visited[indexx][indexy]=1;
        
        if(exist(board,word,visited,indexx+1,indexy,index+1)||exist(board,word,visited,indexx-1,indexy,index+1)||exist(board,word,visited,indexx,indexy+1,index+1)||exist(board,word,visited,indexx,indexy-1,index+1))
            return true;
        visited[indexx][indexy]=0;
        return false;
            
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word.empty())
            return true;
        if(board.empty()||board[0].empty())
            return true;
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(board[i][j]==word[0])
                {
                    vector<vector<bool>>visited(m,vector<bool>(n,0));
                    if(exist(board,word,visited,i,j,0))
                        return true;
                }
            }
        }
        return false;
    }