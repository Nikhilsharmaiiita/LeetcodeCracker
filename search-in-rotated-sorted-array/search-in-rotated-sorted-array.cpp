class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
                if(nums[0]>nums[mid])hi=mid;
            else lo=mid+1;
        }
        int drip_point=lo;
        cout<<drip_point;
        lo=0,hi=drip_point-1;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
                if(nums[mid]>=target)
                    hi=mid;
            else 
                lo=mid+1;
        }
        if(nums[lo]==target)return lo;
        lo=drip_point;
        hi=nums.size()-1;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
                if(nums[mid]>=target)
                    hi=mid;
            else 
                lo=mid+1;
        }
        if(nums[lo]==target)return lo;
        return -1;
    }
};