class Solution {
public:
    void fun(vector<int> &nums,int start,vector<vector<int>> &res,vector<int> cont)
    {
        int n=nums.size();
        //base cont
        if(start==n)
        {
            res.push_back(cont);
            return;
        }
        //recuresive step
        //item not include in the solution 
        fun(nums,start+1,res,cont);
        //item include in the solution
        cont.push_back(nums[start]);
        fun(nums,start+1,res,cont);
        //cont.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(nums,0,res,cont);
        return res;
    }
};