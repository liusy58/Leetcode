    void help(vector<vector<int>>&res,TreeNode* root,int level)
    {
        if(root==NULL)
            return;
        if(res.size()==level)
            res.push_back({});
        res[level].push_back(root->val);
        help(res,root->left,level+1);
        help(res,root->right,level+1);
       
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        help(res,root,0);
        for(int i=1;i<res.size();i+=2)
            reverse(res[i].begin(),res[i].end());
        return res;
    }