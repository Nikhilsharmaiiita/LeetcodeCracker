class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int flag=0;
        for(int i=1;i<nums.size()-1;i++)
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            return i;
        return max_element(nums.begin(),nums.end())-nums.begin();
    }
};