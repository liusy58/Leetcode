void levelOrder(TreeNode* root,vector<vector<int>>&res,int level)
    {
        if(root==NULL)
            return;
        if(level==res.size())
            res.push_back({});
        res[level].push_back(root->val);
        levelOrder(root->left,res,level+1);
        levelOrder(root->right,res,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        levelOrder(root,res,0);
        return res;
    }