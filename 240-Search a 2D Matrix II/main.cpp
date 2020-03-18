#include <iostream>
#include <vector>
#include<queue>
using namespace std;
bool searchMatrix_old(vector<vector<int> > &matrix, int target)
{
    int line=(int)matrix.size();
    if(!line)
        return false;
    int col=(int)matrix[0].size();
    if(!col)
        return false;
    vector<vector<int> >visited(line,vector<int>(col,0));
    pair<int,int>ini(0,0);
    queue<pair<int,int> >s;
    s.push(ini);
    visited[0][0]=1;
    if(matrix[0][0]==target)
        return true;
    while(!s.empty())
    {
        int num=s.size();
        while(num--)
        {
            pair<int,int>temp=s.front();
            s.pop();
            int i=temp.first;
            int j=temp.second;
            if(i+1<line)
            {
                int number=matrix[i+1][j];
                if(number<target&&!visited[i+1][j])
                {
                    s.push(make_pair(i+1,j));
                    visited[i+1][j]=1;
                }
                else if(number==target)
                    return true;
            }
            if(j+1<col)
            {
                int number=matrix[i][j+1];
                if(number<target&&!visited[i][j+1])
                {
                    s.push(make_pair(i,j+1));
                    visited[i][j+1]=1;
                }
                else if(number==target)
                    return true;             
            }
        }
    }
    return false;
}
bool searchMatrix_new(vector<vector<int> > &matrix, int target)
{
    if(!matrix.size()||!matrix[0].size())
        return false;
    int line=matrix.size();
    int col=matrix[0].size();
    int x=line;
    int y=0;
    while(x>=0&&y<col)
    {
        int num=matrix[x][y];
        if(num==target)
            return true;
        else if(num>target)
            x--;
        else if(num<target)
            ++y;

    }
    return false;
}
int main()
{

}