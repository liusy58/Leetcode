    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        int first=0;
        int last=(int)nums.size()-1;
        int middle=first+(last-first)/2;
        TreeNode*res=new TreeNode(nums[middle]);
        vector<int>nums_left(nums.begin(),nums.begin()+middle);
        vector<int>nums_right(nums.begin()+middle+1,nums.end());
        res->left=sortedArrayToBST(nums_left);
        res->right=sortedArrayToBST(nums_right);
        return res;
    }