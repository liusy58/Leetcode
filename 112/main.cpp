bool hasPathSum(TreeNode* root, int sum,int tempsum=0) {
        if(root==NULL)
            return false;
        tempsum+=root->val;
        if(root->left==NULL&&root->right==NULL)
            return sum==tempsum;
        if(root->left==NULL)
            return hasPathSum(root->right,sum,tempsum);
        if(root->right==NULL)
            return hasPathSum(root->left,sum,tempsum); 
        return hasPathSum(root->left,sum,tempsum)||hasPathSum(root->right,sum,tempsum);
    }