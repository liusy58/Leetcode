 void setZeroes(vector<vector<int>>& matrix) {
        if(!matrix.size()||!matrix[0].size())
            return;
        int m=matrix.size();
        int n=matrix[0].size();
        bool line_zero=0;
        bool col_zero=0;
        for(int i=0;i<m;++i)
            if(!matrix[i][0])
                col_zero=1;
        for(int i=0;i<n;++i)
            if(!matrix[0][i])
                line_zero=1;
        for(int i=1;i<m;++i)
            for(int j=1;j<n;++j)
                if(!matrix[i][j])
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
        for(int i=1;i<m;++i)
            for(int j=1;j<n;++j)
                if(matrix[i][j])
                    matrix[i][j]=(!matrix[i][0]||!matrix[0][j])?0:matrix[i][j];
        if(line_zero)
            for(int i=0;i<n;++i)
                matrix[0][i]=0;
        if(col_zero)
            for(int i=0;i<m;++i)
                matrix[i][0]=0;
        
    }