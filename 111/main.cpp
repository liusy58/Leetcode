int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;
        else if(root->left==NULL)
            return 1+minDepth(root->right);
        else if(root->right==NULL)
            return 1+minDepth(root->left);
        return min(minDepth(root->left),minDepth(root->right))+1;
    }