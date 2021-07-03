class Solution {
public:
        vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        set<pair<int,pair<int,int>>> pq;
        for(int j=0;j<nums2.size();j++)
        {
            pq.insert({nums1[0]+nums2[j],{0,j}});
        }
                      
        while(pq.size() && k)
        {
            auto p=pq.begin()->second;
            ans.push_back({nums1[p.first],nums2[p.second]});
            pq.erase(pq.begin());
            if(p.first+1<nums1.size())
            pq.insert({nums1[p.first+1]+nums2[p.second],{p.first+1,p.second}});
            if(p.second+1<nums2.size())
            pq.insert({nums1[p.first]+nums2[p.second+1],{p.first,p.second+1}});
            k--;
        }
        while(pq.size() && k)
        {
                    auto p=pq.begin()->second;
                    ans.push_back({nums1[p.first],nums2[p.second]});
                    pq.erase(pq.begin());
                    k--;
        }
        return ans;
    }
};