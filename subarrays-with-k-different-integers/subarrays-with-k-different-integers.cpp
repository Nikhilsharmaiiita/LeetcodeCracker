class Solution {
public:
    int find_at_most_k(vector<int> &A,int k)
    {
        int n=A.size();
        vector<int> freq(n+1,0);
        int j=0;
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            while(j<n && count<=k )
            {
                if(freq[A[j]]==0)
                    count++;
                freq[A[j]]++;
                j++;
            }
            
            if(count>k)
                ans+=j-i-1;
            else
                ans+=j-i;
            
            freq[A[i]]--;
            if(freq[A[i]]==0)
                count--;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& A, int K) {
        if(K==1)return find_at_most_k(A,K);
        return find_at_most_k(A,K)-find_at_most_k(A,K-1);
    }
};