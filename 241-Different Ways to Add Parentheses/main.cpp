#include<iostream>
#include<vector>
using namespace std;

vector<int> diffWaysToCompute(string input) 
{
    vector<int>res;
    for(int i=0;i<input.size();++i)
    {
        if(input[i]=='+'||input[i]=='-'||input[i]=='*')
        {
            vector<int>left=diffWaysToCompute(input.substr(0,i));
            vector<int>right=diffWaysToCompute(input.substr(i+1));
            for(auto num1:left)
            {
                for(auto num2:right)
                {
                    if(input[i]=='+')
                        res.push_back(num1+num2);
                    if(input[i]=='-')
                        res.push_back(num1-num2);
                    if(input[i]=='*')
                        res.push_back(num1*num2);   
                }
            }
        }
    }
    if(res.empty())
        res.push_back(atoi(input.c_str()));
    return res;
}
int main()
{
    while(1)
    {
        string t;
        cin>>t;
        vector<int>res=diffWaysToCompute(t);
        for(auto t:res)
            cout<<t<<endl;
    }
}