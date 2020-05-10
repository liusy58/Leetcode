    void help(vector<vector<int>>&res,vector<int>&temp,int n, int k,int start=1)
    {
        if(temp.size()==k)
        {
            res.push_back(temp);
            return;
        }
        for(int i=start;i<=n;++i)
        {
            temp.push_back(i);
            help(res,temp,n,k,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        help(res,temp,n,k);
        return res;
    }