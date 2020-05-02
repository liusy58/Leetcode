    bool IsLineValid(vector<vector<char>>& board,int line)
    {
        unsigned int res=0;
        for(int i=0;i<9;++i)
        {
            if(board[line][i]=='.')
                continue;
            if((res>>(board[line][i]-'0'))&1)
            {
                //cout<<"line "<<line<<" col "<<i<<" is invalid"<<endl;
                return false;
            }
                
            res|=(1<<(board[line][i]-'0'));
        }
        //cout<<"line "<<line<<" isvalid"<<endl;
        return true;
    }
    bool IsColValid(vector<vector<char>>& board,int col)
    {
        unsigned int res=0;
        for(int i=0;i<9;++i)
        {
            if(board[i][col]=='.')
                continue;
            if((res>>(board[i][col]-'0'))&1)
                return false;
            res|=(1<<(board[i][col]-'0'));
        }
        //cout<<"col "<<col<<" isvalid"<<endl;
        return true;
    }
    bool IsSquareValid(vector<vector<char>>& board)
    {
        for(int linestart=0;linestart<9;linestart+=3)
        {
            for(int colstart=0;colstart<9;colstart+=3)
            {
                unsigned int res=0;
                for(int i=linestart;i<linestart+3;++i)
                {
                    for(int j=colstart;j<colstart+3;++j)
                    {
                        if(board[i][j]=='.')
                            continue;
                        if((res>>(board[i][j]-'0'))&1)
                            return false;
                        res|=(1<<(board[i][j]-'0'));
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i)
            if(!IsLineValid(board,i)||!IsColValid(board,i))
                return false;
        
        return IsSquareValid(board);
    }