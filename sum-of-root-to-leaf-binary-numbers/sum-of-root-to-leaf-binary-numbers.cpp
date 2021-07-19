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
    void fun(TreeNode *root,vector<string> &res,string &s)
    {
        //base case
        if(!root)
        return;
        
        if(!root->left && !root->right)
        {
            s=s+to_string(root->val);
            res.push_back(s);
            s.pop_back();
            return;
        }
        //rec step
        s=s+to_string(root->val);
        fun(root->left,res,s);
        s.pop_back();        
        s=s+to_string(root->val);
        fun(root->right,res,s);
        s.pop_back();
    }
        
    
    int sumRootToLeaf(TreeNode* root) {
        vector<string> res;
        string s;
        fun(root,res,s);
        
        //code for add them up all the element
        int sum=0;
        for(int i=0;i<res.size();i++)
        {
            int path_sum=0;
            int k=0;
            for(int j=res[i].size()-1;j>=0;j--)
            {
                path_sum+=(pow(2,k)*(res[i][j]-'0'));
                k++;
            }
            sum+=path_sum;
        }
        return sum;
    }
};