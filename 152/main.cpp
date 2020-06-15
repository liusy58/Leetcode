 int maxProduct(vector<int>& nums) {
        int len=(int)nums.size();
        vector<int>minn(nums);
        vector<int>maxx(nums);
        int res=nums[0];
        for(int i=1;i<len;++i)
        {
            minn[i]=min(nums[i],min(minn[i-1]*nums[i],maxx[i-1]*nums[i]));
            maxx[i]=max(nums[i],max(minn[i-1]*nums[i],maxx[i-1]*nums[i]));
            res=max(res,maxx[i]);
        }
        return res;
    }