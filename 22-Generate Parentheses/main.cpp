#include<iostream>
#include<vector>
using namespace std;

void helper(vector<string>&res,string temp,int notpair,int left,int n)
{
    if(temp.size()==2*n)
    {
        res.push_back(temp);
        return;
    }
    if(left>0)
    {
        temp+='(';
        helper(res, temp, notpair+1,left-1, n);
        temp.pop_back();
        if(notpair>0)
        {
            temp+=')';
            helper(res, temp, notpair-1, left, n);
            temp.pop_back();
        }
    }
    else
    {
        temp+=')';
        helper(res, temp, notpair-1, left, n);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string>res;
    helper(res,"", 0, n, n);
    for(auto m:res)
        cout<<m<<endl;
    return res;
}


int main()
{
    while(1)
    {
        int num;
        cin>>num;
        generateParenthesis(num);
    }
    
}
