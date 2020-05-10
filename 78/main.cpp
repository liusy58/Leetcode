    void help(vector<vector<int>>&res,vector<int>&temp,vector<int>& nums,int index=0)
    {
        if(index>=nums.size())
            return;
        for(int i=index;i<nums.size();++i)
        {
            temp.push_back(nums[i]);
            res.push_back(temp);
            help(res,temp,nums,i+1);
            temp.pop_back();
            
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>res;
        res.push_back(temp);
        help(res,temp,nums,0);
        return res;
    }