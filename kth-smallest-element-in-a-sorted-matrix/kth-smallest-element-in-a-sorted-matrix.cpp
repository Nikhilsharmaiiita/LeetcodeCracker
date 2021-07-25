class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                pq.insert(-matrix[i][j]);
                if(pq.size()>k)pq.erase(pq.begin());
            }
        }
        return -(*pq.begin());
    }
};