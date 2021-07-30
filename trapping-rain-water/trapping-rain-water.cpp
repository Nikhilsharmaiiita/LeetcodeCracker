class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)return 0;
        vector<int> prefix_max;
        vector<int> sufix_max(height.size(),0);
        int cum_p_max=INT_MIN;
        //calculate prefix max
        for(int i=0;i<height.size();i++)
        {
            cum_p_max=max(cum_p_max,height[i]);
            prefix_max.push_back(cum_p_max);
        }
        
        int cum_s_max=INT_MIN;
        //calculate sufix max
        for(int i=height.size()-1;i>=0;i--)
        {
            cum_s_max=max(cum_s_max,height[i]);
            sufix_max[i]=cum_s_max;
        }
        
        int ans=0;
        //calculate answer
        for(int i=1;i<height.size()-1;i++)
        {
            int minimum_height=min(prefix_max[i-1],sufix_max[i+1]);
            if(minimum_height-height[i]>0)
            ans+=minimum_height-height[i];
        }
        return ans;
    }
};