class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        if(binary_search(nums.begin(),nums.end(),target))return true;
        else false;
        if(nums.size()==1)
        {
            if(nums[0]==target)return true;else return false;
        }
         int lo=0,hi=nums.size()-1,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
                if(nums[0]>=nums[mid])hi=mid;
            else lo=mid+1;
        }
        int drip_point=lo;
        if(drip_point==0)drip_point++;
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
        if(nums[lo]==target)return true;
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
        if(nums[lo]==target)return true;
        return false;
    }
};