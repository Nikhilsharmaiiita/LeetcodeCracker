class Solution {
public:
  void f(vector<int> &nums,int j,vector<bool> visited,vector<int> &cont,vector<vector<int>> &res)
    {
        //base case
        if(cont.size()==nums.size())
        {
            res.push_back(cont);
            return;
        }
      int prev=-11;
        for(int i=0;i<nums.size();i++)
        {
            if(prev==nums[i])continue;
            if(!visited[i]){
            visited[i]=true;
            cont.push_back(nums[i]);
            prev=nums[i];
            f(nums,j+1,visited,cont,res);
            cont.pop_back();
            visited[i]=false;
            }          
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> cont;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<bool> visited(nums.size(),false);
        f(nums,0,visited,cont,res);
       
        return res;
    }
};