#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
{
    if(root==NULL||p==NULL||q==NULL)
        return NULL;
    if(p->left==q||p->right==q)
        return p;
    if(q->left==p||q->right==p)
        return q;
    if(root==p||root==q)
        return root;
    TreeNode*l=lowestCommonAncestor(root->left, p, q);
    TreeNode*r=lowestCommonAncestor(root->left, p, q);
    if(l&&r)
        return root;
    return l?l:r;
    
}