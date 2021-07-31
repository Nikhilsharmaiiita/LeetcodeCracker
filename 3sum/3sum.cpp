class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        if(nums.size()<3)return {};
        for(int i=0;i<nums.size()-2;)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                    int x=nums[j];
                    j++;
                    k--;
                    while(j<nums.size() && x==nums[j])j++;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                    j++;
            }
            int x=nums[i];
            i++;
            while(i<nums.size()-1 && x==nums[i])i++;
        }
        return v;
    }
};