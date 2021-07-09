class Solution {
public:
void fun(vector<int> &nums,vector<int> &cont,vector<vector<int>> &res,int start)
{
    //base case
    if(start==nums.size())
    {
        res.push_back(cont);
        return;
    }
    //rec step 
    fun(nums,cont,res,start+1);
    cont.push_back(nums[start]);
    fun(nums,cont,res,start+1);
    cont.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(nums,cont,res,0);
        return res;
    }
};