#include<iostream>
#include<vector>
using namespace std;


int maximalSquare(vector<vector<char> >& matrix) {
    if(!matrix.size()||!matrix[0].size())
        return 0;
    int line=(int)matrix.size();
    int col=(int)matrix[0].size();
    vector<vector<int> >temp(line,vector<int>(col,0));
    int res=matrix[0][0]-'0';
    for(int i=0;i<line;++i)
    {
        temp[i][0]=matrix[i][0]-'0';
        res=max(res, temp[i][0]);
    }
    for(int i=0;i<col;++i)
    {
        temp[0][i]=matrix[0][i]-'0';
        res=max(res, temp[0][i]);
    }

    for(int i=1;i<line;++i)
    {
        for(int j=1;j<col;++j)
        {
            if(matrix[i][j]=='1')
            {
                temp[i][j]=min(temp[i][j-1],min(temp[i-1][j],temp[i-1][j-1]))+1;
            }
            res=max(res,temp[i][j]);
        }
    }
    return res*res;
}