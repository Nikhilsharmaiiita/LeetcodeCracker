class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows==1)return {{1}};
        res.push_back({1});
        for(int i=2;i<=numRows;i++)
        {
            vector<int> v=res.back();
            vector<int> x;
            x.push_back(1);
            for(int j=0;j<v.size()-1;j++)
            {
                x.push_back(v[j]+v[j+1]);
            }
            x.push_back(1);
            res.push_back(x);
        }
        return res;
    }
};