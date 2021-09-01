class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            TreeNode* node=root;
            stack<TreeNode*> s;
            while(true)
            {
                if(node!=NULL)
                {
                    s.push(node);
                    node=node->left;
                }
                else
                {
                    if(s.size()==0)break;
                    TreeNode* temp=s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    node=temp->right;
                }
            }
        return ans;
    }
};