class Solution {
public:
    bool help(TreeNode *root,int &height)
    {
        //base case
        if(!root){  
            height=0;
            return true;}
        
        //local copy of height and local copy of left result and right result
        bool ans_l,ans_r;
        int h_l,h_r;
        //find left value
        ans_l=help(root->left,h_l);
        //find right value
        ans_r=help(root->right,h_r);
        
        //update height
        height= 1 + max(h_r,h_l);
        
        return ans_l  &&  ans_r && abs(h_r-h_l)<=1;
    }
    bool isBalanced(TreeNode* root) {
        int height=0;
    return     help(root,height);
    
    }
};