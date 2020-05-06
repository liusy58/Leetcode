    bool is_cross(vector<int>a,vector<int>b)
    {
        return !(a[1]<b[0]||a[0]>b[1]);
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.empty()&&!newInterval.empty())
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        else if(intervals.empty()&&newInterval.empty())
            return intervals;
        else if(!intervals.empty()&&newInterval.empty())
            return intervals;
        vector<vector<int>>res;
        bool flag=0;
        auto iter=intervals.begin();
        for(;iter!=intervals.end();)
        {
            if((*iter)[0]>newInterval[1])
                break;
            if(!is_cross(*iter,newInterval))
            {
                res.push_back(*iter);
                ++iter;
            }

            else
            {
                flag=1;
                newInterval[0]=min((*iter)[0],newInterval[0]);
                newInterval[1]=max((*iter)[1],newInterval[1]);
                ++iter;
                while(iter!=intervals.end()&&is_cross(*iter,newInterval))
                {
                    newInterval[0]=min((*iter)[0],newInterval[0]);
                    newInterval[1]=max((*iter)[1],newInterval[1]);
                    ++iter;
                }
                res.push_back(newInterval);
            }
        }
        if(!flag)
            res.push_back(newInterval);
        while(iter!=intervals.end())
        {
            res.push_back(*iter);
            iter++;
        }
        return res;
    }