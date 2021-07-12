class Solution {
public:
    void fun(vector<int> &nums, vector<vector<int>> &res,vector<int> &cont,int start)
    {
        int n=nums.size();
        //base case
        if(start==n)
        {
            res.push_back(cont);
            return;
        }
        //recursive step 
        //item include
        cont.push_back(nums[start]);
        fun(nums,res,cont,start+1);
        cont.pop_back();
        //item not include in cont
        int j=start;
        while(j<n-1 && nums[j]==nums[j+1])j++;
        fun(nums,res,cont,j+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        sort(nums.begin(),nums.end());
        fun(nums,res,cont,0);
        return res;
    }
};