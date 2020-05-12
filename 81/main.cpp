bool search(vector<int>& nums, int target) {
        if(nums.empty())
            return false;
        if(nums.size()==1)
            return nums[0]==target;
        int index=0;
        while(index<(int)nums.size()-1&&nums[index]<=nums[index+1])
            ++index;
        int first=0;
        int last=index;
        //cout<<"    "<<first<<"   "<<last<<endl;
        while(first<=last)
        {
            int middle=first+(last-first)/2;
            if(nums[middle]<target)
                first=middle+1;
            else if(nums[middle]==target)
                return true;
            else
                last=middle-1;
        }
        
        first=index+1;
        last=nums.size()-1;
        //cout<<"    "<<first<<"   "<<last<<endl;
        while(first<=last)
        {
            int middle=first+(last-first)/2;
            if(nums[middle]<target)
                first=middle+1;
            else if(nums[middle]==target)
                return true;
            else
                last=middle-1;
        }
        return false;
        
    }