class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        vector<int> ans;
        for(auto it:m1)
        {
            int x=min(it.second,m2[it.first]);
            for(int i=0;i<x;i++)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};