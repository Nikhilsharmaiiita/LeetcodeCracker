class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
         if(nums[j]!=nums[i]){j++;nums[j]=nums[i];}
        }
        if(nums.size()==0)return 0;else return j+1;
    }
};