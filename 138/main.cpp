    map<Node*,Node*>old2new;
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        if(old2new.count(head))
            return old2new[head];
        Node*newnode=new Node(head->val);
        old2new[head]=newnode;
        newnode->next=copyRandomList(head->next);
        newnode->random=copyRandomList(head->random);
        return newnode;
        
    }