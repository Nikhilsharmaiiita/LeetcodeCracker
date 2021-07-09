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
    int total=0;
    void fun(TreeNode* root,int sum)
    {
        if(!root)return;
        if(!root->left && !root->right){total+=(sum*10+root->val);return;}
        
        int sum1=sum*10+root->val;
        fun(root->left,sum1);
        int sum2=sum*10+root->val;
        fun(root->right,sum2);
        
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return total;
    }
};