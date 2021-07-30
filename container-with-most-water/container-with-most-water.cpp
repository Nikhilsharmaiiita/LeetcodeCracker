class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,hi=height.size()-1;
        int ans=INT_MIN;
        while(low<hi)
        {
            int x=min(height[low],height[hi])*(hi-low);
            ans=max(ans,x);
            if(height[low]<=height[hi])low++;
            else hi--;
        }
        return ans;
    }
};