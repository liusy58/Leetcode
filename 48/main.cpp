    void rotate(vector<vector<int>>& matrix) {
        if(matrix.empty()||matrix[0].empty())
            return;
        int n=(int)matrix.size();
        for(int i=0;i<n/2;++i)
            for(int j=0;j<n;++j)
                swap(matrix[i][j],matrix[n-1-i][j]);
        for(int i=0;i<n;++i)
            for(int j=0;j<i;++j)
                swap(matrix[i][j],matrix[j][i]);
    }

//先上下对称，再绕着左对角线对称
