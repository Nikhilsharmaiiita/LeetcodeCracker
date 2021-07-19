class Solution {
public:
    int ans;
    int to_decimal(string s)
    {
            int path_sum=0;
            int k=0;
            for(int j=s.size()-1;j>=0;j--)
            {
                path_sum+=(pow(2,k)*(s[j]-'0'));
                k++;
            }
        return path_sum;
    }
    
    void fun(TreeNode *root,string &s)
    {
        //base case
        if(!root)
        return;
        
        if(!root->left && !root->right)
        {
            s=s+to_string(root->val);
            ans+=to_decimal(s);
            s.pop_back();
            return;
        }
        //rec step
        s=s+to_string(root->val);
        fun(root->left,s);
        s.pop_back();        
        s=s+to_string(root->val);
        fun(root->right,s);
        s.pop_back();
    }
           
    int sumRootToLeaf(TreeNode* root) {
        string s;
        ans=0;
        fun(root,s);

        return ans;
    }
};