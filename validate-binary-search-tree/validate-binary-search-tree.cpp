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
    bool helper(TreeNode*root,long &maxx,long &minn)
    {
        if(!root)
        {
            maxx=LONG_MIN;
            minn=LONG_MAX;
            return true;
        }
        //local int max and min
        //local answer
        bool ans_l,ans_r;
        long max_l,max_r,min_l,min_r;
        ans_l = helper(root->left,max_l,min_l);
        ans_r = helper(root->right,max_r,min_r);
        
        maxx = max((long)root->val,max(max_l,max_r));
        minn = min((long)root->val,min(min_l,min_r));
        
        
        return ans_l && ans_r && (root->val >max_l && root->val < min_r);
    }
    bool isValidBST(TreeNode* root) {
        long maxx=LONG_MIN;
        long minn=LONG_MAX;
        return helper(root,maxx,minn);
        
    }
};