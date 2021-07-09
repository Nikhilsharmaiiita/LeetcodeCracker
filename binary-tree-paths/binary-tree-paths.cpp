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
    void fun(TreeNode *root,string cont,vector<string> &res)
    {
        //base case
        if(!root)return;
        if(!root->left && !root->right)
        {
            cont+=to_string(root->val);
            res.push_back(cont);
            return;
        }
        //rec step
        string cont1=cont;
        string cont2=cont;
        cont1+=to_string(root->val);
        cont1+="->";
        fun(root->left,cont1,res);
        cont2+=to_string(root->val);
        cont2+="->";
        fun(root->right,cont2,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string cont;
        fun(root,cont,res);
        return res;
    }
};