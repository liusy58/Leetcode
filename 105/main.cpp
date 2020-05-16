    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty())
            return NULL;
        int num=preorder[0];
        TreeNode*res=new TreeNode(num);
        int index=0;
        
        while(inorder[index]!=num)
            ++index;
        vector<int>preorder_left(preorder.begin()+1,preorder.begin()+index+1);
        vector<int>preorder_right(preorder.begin()+index+1,preorder.end());
        vector<int>inorder_left(inorder.begin(),inorder.begin()+index);
        vector<int>inorder_right(inorder.begin()+index+1,inorder.end());
        res->left=buildTree(preorder_left,inorder_left);
        res->right=buildTree(preorder_right,inorder_right);
        return res;
    }