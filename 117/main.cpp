#include<iostream>
#include<queue>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        queue<Node*>que;
        que.push(root);
        while(!que.empty())
        {
            int num=que.size();
            Node*now=NULL;
            Node*before=NULL;
            while(num--)
            {
                before=now;
                now=que.front();
                que.pop();
                if(now->left!=NULL)
                    que.push(now->left);
                if(now->right!=NULL)
                    que.push(now->right);
                if(before!=NULL)
                    before->next=now;
            }
            now->next=NULL;
        }
        
        return root;
    }