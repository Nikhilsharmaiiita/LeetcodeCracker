class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //for first position arr[mid]<target (TTTTTTT)
        //TTTTTTTFFFFFFFFF
        //find first false
        if(nums.size()==0)return {-1,-1};
        vector<int> v;
        int lo=0,hi=nums.size()-1,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]<target)
                lo++;
            else
                hi=mid;
        }
        if(nums[lo]==target)
            v.push_back(lo);
        else return {-1,-1};
        lo=0,hi=nums.size()-1;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            if(nums[mid]<=target)
            lo=mid;
            else
            hi--;
        }
        v.push_back(lo);
        return v;
    }
};