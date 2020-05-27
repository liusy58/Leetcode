bool wordBreak(string s, vector<string>& wordDict) {
        if(s.empty())
            return false;
        map<string,int>t;
        for(auto str:wordDict)
            t[str]=1;
        int num=s.size();
        vector<bool>dp(num+1,0);
        dp[0]=1;
        for(int i=1;i<=num;++i)
        {
            for(int j=0;j<i;++j)
                dp[i]=(dp[j]&&t[s.substr(j,i-j)])||dp[i];
        }
        return dp[num];
    }