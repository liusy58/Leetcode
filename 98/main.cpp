    bool isValidBST(TreeNode* root,long long left=(long long)INT_MIN-1,long long right=(long long)INT_MAX+1)
    {
        if(root==NULL)
            return true;
        if(root->val>left&&root->val<right)
        {
            if(isValidBST(root->left,left,root->val)&&isValidBST(root->right,root->val,right))
                return true;
        }
        return false;
    }