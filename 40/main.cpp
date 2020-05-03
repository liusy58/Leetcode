    
    void help( vector<vector<int>>&res,vector<int>& candidates,vector<int>& temp,int index,int tempsum,int target)
    {
        if(tempsum==target)
        {
            res.push_back(temp);
            return;
        }
        if(tempsum>target)
            return;
        for(int i=index;i<candidates.size();)
        {
            temp.push_back(candidates[i]);
            help(res,candidates,temp,i+1,tempsum+candidates[i],target);
            temp.pop_back();
            while(i!=candidates.size()-1&&candidates[i]==candidates[i+1])
                ++i;
            ++i;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int> temp;
        help(res,candidates,temp,0,0,target);
        return res;
    }