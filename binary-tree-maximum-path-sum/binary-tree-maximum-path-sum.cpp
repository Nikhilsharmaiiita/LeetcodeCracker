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
    // Returns the max sum path (as defined in the Question) of the tree rooted at "root" (returned explicitly).
    // It also returns the max sum of a path that start at "root" (returned in max_sum_rooted).
    int maxPathSumHelper(TreeNode* root, int& max_sum_rooted) {
        if (!root) {
            max_sum_rooted = 0;
            return -50000;
        }
        
        int max_sum_left, max_sum_root_left, max_sum_right, max_sum_root_right;
        
        // Get for the left.
        max_sum_left = maxPathSumHelper(root->left, max_sum_root_left);
        
        // Get for the right.
        max_sum_right = maxPathSumHelper(root->right, max_sum_root_right);
        
        // Combine
        max_sum_rooted = root->val + max(0, max(max_sum_root_left, max_sum_root_right));
        //this is when we not include root path in some in b/w
        int max_sum = max(max_sum_left, max_sum_right);
        //this is when we include root node into path
        max_sum = max(max_sum, max(0, max_sum_root_left) + root->val + max(0, max_sum_root_right));
        //final return value its may include root or may not but it,s max.
        return max_sum;
        
    }
    int maxPathSum(TreeNode* root) {
        int max_sum_rooted;
        
        return maxPathSumHelper(root, max_sum_rooted);
    }
};