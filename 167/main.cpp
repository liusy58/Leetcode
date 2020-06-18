    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto iter=nums.begin();iter!=nums.end();++iter)
        {
            if(iter!=nums.begin()&&*iter==*(iter-1))
                continue;
            if(find(iter+1,nums.end(),target-*iter)!=nums.end())
            {
                auto iter2=find(iter+1,nums.end(),target-*iter);
                return {(int)(iter-nums.begin())+1,(int)(iter2-nums.begin())+1};
            }
        }
        return {};
    }