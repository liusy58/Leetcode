bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()||!matrix[0].size())
            return false;
        
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        
        int a=m;
        int b=0;
        while(1)
        {
            if(a>m||a<0||b<0||b>n)
                return false;
            if(matrix[a][b]>target)
                --a;
            else if(matrix[a][b]<target)
                ++b;
            else
                return true;
        }
        
    }