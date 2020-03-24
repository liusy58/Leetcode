#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void help(TreeNode* root)
{
    
    if(root==NULL||root->left==NULL&&root->right==NULL)
        return;
    swap(root->left,root->right);
    help(root->left);
    help(root->right);
}
TreeNode* invertTree(TreeNode* root) {
    help(root);
    return root;
}
int main()
{

}