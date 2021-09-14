class Solution {
public:
    void fun(vector<int> &nums,int start,vector<vector<int>> & res,vector<int>  cont)
    {
        //base case
        if(start==nums.size())
        {
            res.push_back(cont);
            return;
        }
        //rec step
        cont.push_back(nums[start]);
        fun(nums,start+1,res,cont);
        cont.pop_back();
        int j=start;
        while(j<nums.size()-1 && nums[j]==nums[j+1])j++;
        fun(nums,j+1,res,cont);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        sort(nums.begin(),nums.end());
        fun(nums,0,res,cont);
        return res;
    }
};