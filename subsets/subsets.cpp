class Solution {
public:
    void fun(vector<int> &nums,int start,vector<vector<int>> &res,vector<int>& cont)
    {
        //base case
        if(start==nums.size())
        {
            res.push_back(cont);
            return;
        }
        
        //rec step
        fun(nums,start+1,res,cont);
        cont.push_back(nums[start]);
        fun(nums,start+1,res,cont);
        cont.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(nums,0,res,cont);
        return res;
    }
};