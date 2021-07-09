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
    void helper(TreeNode *root,int target,int sum,bool &res)
    {
        //base case
        if(!root)return;
        if(!root->left && !root->right)
        {
            res=res || sum+root->val==target;
            return;
        }
        //rec step
        helper(root->left,target,sum+root->val,res);
        helper(root->right,target,sum+root->val,res);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool res=false;
        helper(root,targetSum,0,res);
        return res;
    }
};