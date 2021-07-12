class Solution {
public:
    void fun(vector<int> &nums,vector<vector<int>> &res,vector<int> &cont,int j)
    {
        int n=nums.size();
        //base case
        if(cont.size()==n)
        {
            res.push_back(cont);
            return;
        }
        //recursive case
        for(int i=j;i<n;i++)
        {
                cont.push_back(nums[i]);
                swap(nums[i],nums[j]);
                fun(nums,res,cont,j+1);
                cont.pop_back();
                swap(nums[i],nums[j]);
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(nums,res,cont,0);
        return res;
    }
};