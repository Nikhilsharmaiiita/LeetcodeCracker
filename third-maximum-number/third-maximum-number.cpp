class Solution {
public:
    int thirdMax(vector<int>& nums) {
     long f,s,t;
        f=nums[0];
        s=LONG_MIN;
        t=LONG_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(f<nums[i])
            {
                t=s;
                s=f;
                f=nums[i];
            }else if(s<nums[i] && nums[i]!=f)
            {
                t=s;
                s=nums[i];
            }
            else if(t<nums[i] && nums[i]!=f && nums[i]!=s) 
            {
                t=nums[i];
            }
        }
        return t==LONG_MIN?f:t;
     
    }
};