    Node* connect(Node* root,Node*next=NULL) {
        if(root==NULL)
            return NULL;
        
        root->next=next;
        connect(root->left,root->right);
        if(next!=NULL)
        {
            connect(root->right,next->left);
            connect(next->left,next->right);
            connect(next->right,NULL);
        }
            
    
        return root;
    }