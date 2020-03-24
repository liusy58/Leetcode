#include<iostream>
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
void help(TreeNode* root, int &k,int&res)
{
    if(root==NULL)
        return;
    help(root->left,k,res);
    k--;
    if(!k)
        res=root->val;
    help(root->right,k,res);
}
int kthSmallest(TreeNode* root, int k) {
    int res=0;
    help(root,k,res);
    return res;
}