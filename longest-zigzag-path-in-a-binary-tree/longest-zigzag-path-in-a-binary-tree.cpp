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
    void right_move(TreeNode *root ,int &max_z,int &sum)
    {
       
        if(!root)
        {
            max_z=max(max_z,sum-1);
            return;
        }
        
        max_z=max(max_z,sum);
        //recursicve step
        int sum2=1;
        int sum1=sum+1;
        left_move(root->left,max_z,sum1);
        right_move(root->right,max_z,sum2);
    }
    void left_move(TreeNode *root , int &max_z,int &sum)
    {
        
        if(!root)
        {
            max_z=max(max_z,sum-1);
            return;
        }
       
         max_z=max(max_z,sum);
        //recursicve step
        int sum2=1;
         int sum1=sum+1;
        right_move(root->right,max_z,sum1);
        left_move(root->left,max_z,sum2);
        
    }
    int longestZigZag(TreeNode* root) {
        if(!root->left && !root->right)return 0;
        int maxx=0;
        int sum=1;
        left_move(root->left,maxx,sum);
        right_move(root->right,maxx,sum);
        return maxx;
    }
};