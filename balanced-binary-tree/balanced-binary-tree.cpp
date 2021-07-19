/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool fun(TreeNode *root,int &height)
    {
        //base case<=1
        if(!root)
        {
            height=0;
            return 1;
        }
        //rec step
        int H_l,H_r;
        bool l=fun(root->left,H_l);
        bool R=fun(root->right,H_r);
        
        height=1+max(H_l,H_r);
        
        return l & R && abs(H_l-H_r)<=1;
    }
    bool isBalanced(TreeNode* root) {
        int height=0;
        return fun(root,height);
    }
};