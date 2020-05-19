void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        if(root->left!=NULL)
            flatten(root->left);
        if(root->right!=NULL)
            flatten(root->right);
        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        while(root->right!=NULL)
            root=root->right;
        root->right=temp;
    }