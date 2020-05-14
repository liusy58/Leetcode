    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
            return {};
        return  *generateTreesDFS(1,n);
    }
    
    vector<TreeNode*> *generateTreesDFS(int start, int end) {
        vector<TreeNode*> *res=new vector<TreeNode*>();
        if(start>end)
        {
            res->push_back(NULL);
            return res;
        }
        for(int i=start;i<=end;++i)
        {
            vector<TreeNode*> *left_tree=generateTreesDFS(start,i-1);
            vector<TreeNode*> *right_tree=generateTreesDFS(i+1,end);
            for(int m=0;m<left_tree->size();++m)
            {
                for(int n=0;n<right_tree->size();++n)
                {
                    TreeNode *node=new TreeNode(i);
                    node->left=(*left_tree)[m];
                    node->right=(*right_tree)[n];
                    res->push_back(node);
                }
            }
            
        }
        return res;
    }