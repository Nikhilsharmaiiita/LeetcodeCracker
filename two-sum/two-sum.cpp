class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //O(n) solution with map space 
        
//         vector<int> v;
//         // unordered_map<int,int> m;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(m.find(target-nums[i])!=m.end())
//             {
//                 v.push_back(m[target-nums[i]]);
//                 v.push_back(i);
//                 return v;
//             }
//             m[nums[i]]=i;
//         }
//         return v;
        
        //nlogn solution with O(n) space.
        vector<vector<int>> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
            v.push_back({nums[i],i});
        
        sort(v.begin(),v.end());
        
        int i=0,j=n-1;
        while(i<j)
        {
            if(v[i][0]+v[j][0]==target)
                return {v[i][1],v[j][1]};
            else if(v[i][0]+v[j][0]>target)
                j--;
            else
                i++;
        }
        return {-1,-1};
    }
};