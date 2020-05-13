    void help(vector<vector<int>>&res,vector<int>& nums,vector<int>&temp,int index=0)
    {
        if(index>=nums.size())
            return;
        for(int i=index;i<nums.size();)
        {
            temp.push_back(nums[i]);
            res.push_back(temp);
            int num=nums[i];
            ++i;
            help(res,nums,temp,i);
            while(i<nums.size()&&nums[i]==num)
                ++i; 
            temp.pop_back();   
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp;
        res.push_back(temp);
        help(res,nums,temp);
        return res;
    }