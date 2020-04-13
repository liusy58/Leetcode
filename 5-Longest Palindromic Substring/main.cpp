#include <iostream>

using namespace std;

string longestPalindrome(string s)
{
    int num = (int)s.size();
    vector<vector<bool>>dp(num,vector<bool>(num,0));
    for (int i = 0; i < num; ++i)
    {
        dp[i][i] = 0;
        if (i != num - 1)
            dp[i][i + 1] = (s[i] == s[i + 1]);
    }
    int len=0,start=0;
    for(int i=num-1;i>=0;--i)
    {
        for(int j=i+2;j<num;++j)
        {
            dp[i][j]=dp[i+1][j-1]&&(s[i]==s[j]);
            if(dp[i][j])
            {
                len=max(len,i-j+1);
                if(len==i-j+1)
                    start=i;
            }
        }
    }
    return s.substr(start,len);
}