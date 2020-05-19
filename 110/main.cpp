int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->right),height(root->left));
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        return abs(height(root->left)-height(root->right))<=1&&isBalanced(root->left)&&isBalanced(root->right);
        
    }