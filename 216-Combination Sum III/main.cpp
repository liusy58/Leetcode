#include<iostream>
#include<vector>
using namespace std;
void help(vector<vector<int> >&res,vector<int>temp,int k,int n,int now,int nowsum)
{
    if(!k&&nowsum==n)
    {
        res.push_back(temp);
        return;
    }
    for(int i=now;i<=9;++i)
    {
        temp.push_back(i);
        help(res,temp,k-1,n,i+1,nowsum+i);
        temp.pop_back();
    }
}
vector<vector<int> >combinationSum3(int k, int n) {
    vector<vector<int> >res;
    vector<int>temp;
    help(res,temp,k,n,1,0);
    return res;
}
int main()
{

}