class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int cum_sum=0;
        int ans=INT_MAX;
        while(i<nums.size())
        {
            cum_sum+=nums[i];
            while(cum_sum>=target)
            {
               ans=min(ans,(i-j+1));
               cum_sum-=nums[j];
               j++;
            }
            i++;
        }
        return ans==INT_MAX?0:ans;
    }
};