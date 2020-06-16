int findMin(vector<int>& nums,int left,int right)
    {
        if(left==right)
            return nums[left];
        if(left+1==right)
            return min(nums[left],nums[right]);
        int middle=left+(right-left)/2;
        if(nums[left]>nums[right])
        {
            if(nums[middle]>nums[left])
                return findMin(nums,middle,right);
            return findMin(nums,left,middle);
        }
        else
        {
            if(nums[middle]>nums[left])
                return findMin(nums,left,middle);
            return findMin(nums,middle,right);
        }
        
            
    }
    int findMin(vector<int>& nums) {
        int len=(int)nums.size();
        return findMin(nums,0,len-1);
        
    }