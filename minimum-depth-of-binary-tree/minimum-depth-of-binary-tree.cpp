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
    // int minDepthHelper(TreeNode * root)
    // {
    //     //base case
    //     if(!root)return 0;
    //     //recursive step
    //     return 1+(min(minDepthHelper(root->left),minDepthHelper(root->right))?min(minDepthHelper(root->left),minDepthHelper(root->right)):max(minDepthHelper(root->left),minDepthHelper(root->right)));
    // }
    // int minDepth(TreeNode* root) {
    //     //this for empty tree
    //     if(!root)return 0;
    //     return minDepthHelper(root);
    // }
    int minDepth(TreeNode* root) {
    if (!root) return 0;
    int L = minDepth(root->left), R = minDepth(root->right);
    return 1 + (min(L, R) ? min(L, R) : max(L, R));
}
};