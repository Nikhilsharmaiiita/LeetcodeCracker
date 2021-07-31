class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> Last_idx(26,-1);
        int n=S.size();
        for(int i=0;i<n;i++)
            Last_idx[S[i]-'a']=i;
        vector<int> v;
        int maxlen=INT_MIN;
        int len=0;
        for(int i=0;i<n;i++)
        {
            maxlen=max(maxlen,Last_idx[S[i]-'a']);
            len++;
            
            if(maxlen==i)
            {
                v.push_back(len);
                len=0;
                maxlen=INT_MIN;
            }
        }
        
        return v;
    }
};