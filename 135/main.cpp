int candy(vector<int>& ratings) {
        int num=ratings.size();
        vector<int>cnt(num,1);
        for(int i=1;i<num;++i)
        {
            if(ratings[i]>ratings[i-1])
            {
                cnt[i]=max(cnt[i],cnt[i-1]+1);
            }
        }
        for(int i=num-2;i>=0;--i)
        {
            if(ratings[i]>ratings[i+1])
            {
                cnt[i]=max(cnt[i],cnt[i+1]+1);
            }
        }
        int res=0;
        for(int i=0;i<num;++i)
        {
            res+=cnt[i];
        }
        return res;
    }