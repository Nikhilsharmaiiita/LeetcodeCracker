class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==1)return {{1}};
        if(numRows==2)return {{1},{1,1}};
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i=0;i<numRows-2;i++)
        {
            vector<int> v;
            v.push_back(1);
            for(int j=0;j<ans[ans.size()-1].size()-1;j++)
            {
                v.push_back(ans[ans.size()-1][j]+ans[ans.size()-1][j+1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};