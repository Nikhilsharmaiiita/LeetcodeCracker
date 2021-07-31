class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4)return {};
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;)
        {
            for(int j=i+1;j<nums.size()-2;)
            {
                int k=j+1;
                int l=nums.size()-1;
                while(k<l)
                {
                    long long a=nums[i];
                        long long b=nums[j];
                        long long c=nums[k];
                        long long d=nums[l];
                    if(a+b+c+d==target)
                    {
                        
                        
                        v.push_back({nums[i],nums[j],nums[k],nums[l]});
                        int x=nums[k];
                        k++;
                        while(k<nums.size() && x==nums[k])k++;
                        l--;}
                                             
                    else if(a+b+c+d>target)l--;
                    else k++;                
                }
                int x=nums[j];
                j++;
                while(j<nums.size() && x==nums[j])j++;    
        }
            int x=nums[i];
            i++;
            while(i<nums.size() && x==nums[i])i++;
    }
        return v;
    }
};