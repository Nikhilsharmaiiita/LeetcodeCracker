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
    int minDepthHelper(TreeNode * root)
    {
        //base case
        if(!root)return INT_MAX;
         //for leaf node only
        if(!root->left && !root->right)
        {
            return 1;
        }
        
        //recursive step
        return 1+min(minDepthHelper(root->left),minDepthHelper(root->right));
    }
    int minDepth(TreeNode* root) {
        //this for empty tree
        if(!root)return 0;
        return minDepthHelper(root);
    }
};