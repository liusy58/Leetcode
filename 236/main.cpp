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
void DFS(TreeNode*t,TreeNode*m,bool&res)
{
    if(t==NULL)
        return;
    if(t==m)
    {
        res=1;
        return;
    }
    DFS(t->left,m,res);
    DFS(t->right,m,res);
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    TreeNode* res;
    queue<TreeNode*>que;
    que.push(root);
    while(!que.empty())
    {
        TreeNode* temp=que.front();
        bool res1=0;
        bool res2=0;
        DFS(temp,p,res1);
        if(res1)
            DFS(temp,q,res2);
        if(res1&&res2)
        {
            res=temp;
            que.pop();
            que.push(temp->left);
            que.push(temp->right);
        }
    }
    return res;
}