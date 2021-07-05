class Solution {
public:
    void fun(vector<int> &nums,int target,vector<vector<int>> &res,vector<int> &cont,int start,int sum)
    {
        //base case 
        if(sum==target)
        {
            res.push_back(cont);
            return;
        }
        if(start>=nums.size())
            return;
        //recusive step 
        //include the element 
        if(sum+nums[start]<=target){
        cont.push_back(nums[start]);
        fun(nums,target,res,cont,start+1,sum+nums[start]);
        cont.pop_back();
        }
        //not include the element 
        int j=start;
        int n=nums.size();
        while(j<n-1 && nums[j]==nums[j+1])j++;
        fun(nums,target,res,cont,j+1,sum);        
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>> res;
        vector<int> cont;
        fun(c,target,res,cont,0,0);
        
        return res;
    }
};