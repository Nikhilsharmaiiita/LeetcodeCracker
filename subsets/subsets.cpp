class Solution {
public:
void fun(vector<int> &nums,int start,vector<vector<int>> &res,vector<int> &cont)
{
    //base case
    if(start==nums.size())
    {
        res.push_back(cont);
        cout<<cont.size()<<" ";
        return;
    }
    //rec step
    fun(nums,start+1,res,cont);
    cont.push_back(nums[start]);
    fun(nums,start+1,res,cont);
    cont.pop_back();
}
vector<vector<int>> subsets(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> cont;
    sort(A.begin(),A.end());
    fun(A,0,res,cont);
    return res;
}
};