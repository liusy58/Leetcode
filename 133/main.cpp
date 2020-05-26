    Node* cloneGraph(Node* node,map<Node*,Node*>&old2new)
    {
        if(node==NULL)
            return NULL;
        if(old2new.count(node))
            return old2new[node];
        Node*newnode=new Node(node->val);
        old2new[node]=newnode;
        for(auto t:node->neighbors)
            newnode->neighbors.push_back(cloneGraph(t,old2new));
        return newnode;
    }
    Node* cloneGraph(Node* node) {
        map<Node*,Node*>old2new;
        Node*res=cloneGraph(node,old2new);
        return res;
        
    }