 int sumNumbers(TreeNode* root,int tempsum=0) {
        if(root==NULL)
        {
            return tempsum;
        }
        tempsum=tempsum*10+root->val;
        if(root->left!=NULL&&root->right!=NULL)
            return sumNumbers(root->left,tempsum)+sumNumbers(root->right,tempsum);
        else if(root->left!=NULL)
            return sumNumbers(root->left,tempsum);
        else if(root->right!=NULL)
            return sumNumbers(root->right,tempsum);
        return tempsum;
        
    }