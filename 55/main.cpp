    bool canJump(vector<int>& nums) {
        int len=(int)nums.size()-1;
        int now=0;
        while(1)
        {
            if(now>=len)
                return true;
            int maxindex=-1;
            int maxx=0;
            for(int j=1;j<=nums[now]&&now+j<=len;++j)
            {
                if(now+j+nums[now+j]>maxx)
                {
                    maxx=now+j+nums[now+j];
                    maxindex=now+j;
                }
            }
            
            if(maxindex==-1)
                return false;
            now=maxindex;
        }
        return true;
        
    }