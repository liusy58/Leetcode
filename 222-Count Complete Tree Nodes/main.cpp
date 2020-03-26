#include<iostream>
using namespace std;

class Solution {
public:
    int res=0;
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};