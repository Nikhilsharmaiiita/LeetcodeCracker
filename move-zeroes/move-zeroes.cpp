class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            { 
                //for minimum swap 
                if(i!=j)
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
    }
};