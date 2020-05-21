 void DFS(vector<vector<char>>& board,vector<vector<bool>>& visited,int i,int j)
    {
        
        if(i<0||i>=visited.size()||j<0||j>=visited[0].size()||board[i][j]!='O'||visited[i][j])
            return;
        //cout<<i<<"    "<<j<<endl;
        visited[i][j]=1;
        board[i][j]='!';
        DFS(board,visited,i-1,j);
        DFS(board,visited,i+1,j);
        DFS(board,visited,i,j-1);
        DFS(board,visited,i,j+1);
            
    }
    void solve(vector<vector<char>>& board) {
        if(board.empty()||board[0].empty())
            return;
        int line=board.size();
        int col=board[0].size();
        vector<vector<bool>>visited(line,vector<bool>(col,0));
        for(int i=0;i<line;++i)
        {
            if(board[i][0]=='O')
                DFS(board,visited,i,0);
            if(board[i][col-1]=='O')
                DFS(board,visited,i,col-1);
        }
        for(int i=0;i<col;++i)
        {
            if(board[0][i]=='O')
                DFS(board,visited,0,i);
            if(board[line-1][i]=='O')
                DFS(board,visited,line-1,i);
        }
        for(int i=0;i<line;++i)
        {
            for(int j=0;j<col;++j)
            {
                if(board[i][j]=='!')
                    board[i][j]='O';
                else
                    board[i][j]='X';
            }
        }
           
    }